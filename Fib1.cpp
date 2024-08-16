#include <iostream>
#include <vector>
#include <iomanip>
#include <ios>
#include <time.h>

#define ll long long

using namespace std;

ll Fib1(int n)
{
    if (n <= 1) return n;
    return Fib1(n - 1) + Fib1(n - 2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("output1.txt", "w", stdout);

    vector<ll> res(50);

    struct timespec tmStart, tmEnd;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
    for (int i = 0; i < 50; i++)
    {
        res[i] = Fib1(i);
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);
    
    cout << "Raw Recursion for first 50 Fibonacci numbers\n\n";

    double time_taken = (tmEnd.tv_sec - tmStart.tv_sec) * 1e9;
    time_taken += tmEnd.tv_nsec - tmStart.tv_nsec;
    time_taken /= 1e9;
    cout << "Time taken: " << fixed << time_taken << setprecision(9) << "s" << endl << endl;

    for (auto x : res) cout << x << " ";

    return 0;
}