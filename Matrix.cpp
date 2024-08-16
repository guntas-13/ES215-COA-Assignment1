#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <iomanip>
#include <ios>

using namespace std;

template <typename T>
void createRandomMatrix(vector<vector<T>>& matrix)
{
    int N = matrix.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            T value = static_cast<T>(rand() * 1e6) / (static_cast<T>(RAND_MAX));
            matrix[i][j] = value;
        }
    }
}

template <typename T>
void printMatrix(vector<vector<T>>& matrix)
{
    int N = matrix.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
void matrixMultiplication(vector<vector<T>>& A, vector<vector<T>>& B, vector<vector<T>>& C)
{
    int N = A.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    srand(time(0));

    int N; char C;
    cin >> N >> C;

    vector<vector<int>> mI1(N, vector<int>(N));
    vector<vector<int>> mI2(N, vector<int>(N));
    vector<vector<int>> mI3(N, vector<int>(N));

    vector<vector<double>> mD1(N, vector<double>(N));
    vector<vector<double>> mD2(N, vector<double>(N));
    vector<vector<double>> mD3(N, vector<double>(N));

    if (C == 'I')
    {
        createRandomMatrix(mI1);
        createRandomMatrix(mI2);
    }
    else
    {
        createRandomMatrix(mD1);
        createRandomMatrix(mD2);
    }

    struct timespec tmStart, tmEnd;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
    matrixMultiplication(mD1, mD2, mD3);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);

    // cout << "Matrix Multiplication of two " << N << " x " << N << " matrices of type ";
    // if (C == 'I') cout << "integer";
    // else cout << "double";

    double time_taken = (tmEnd.tv_sec - tmStart.tv_sec) * 1e9;
    time_taken += tmEnd.tv_nsec - tmStart.tv_nsec;
    time_taken /= 1e9;
    cout << endl << "CPU Time taken by the Meat Portion function: " << fixed << time_taken << setprecision(9) << "s" << endl;

    return 0;
}