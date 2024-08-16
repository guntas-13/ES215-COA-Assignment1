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


ll Fib2(int n)
{
    if (n <= 1) return n;
    ll a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

ll Fib3(int n, vector<ll>& dp)
{
    if (n <= 1) return dp[n] = n;
    
    if (dp[n] != -1) return dp[n];

    return dp[n] = Fib3(n - 1, dp) + Fib3(n - 2, dp);
}

void Fib4(int n, vector<ll>& dp)
{
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("output.txt", "w", stdout);

    vector<ll> res(50);

    struct timespec tmStart1, tmEnd1;

    cout << "Raw Recursion for first 50 Fibonacci numbers" << endl;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart1);
    for (int i = 0; i < 50; i++)
    {
        res[i] = Fib1(i);
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd1);

    double time_taken1 = tmEnd1.tv_sec - tmStart1.tv_sec + (tmEnd1.tv_nsec - tmStart1.tv_nsec) * 1e-9;
    cout << "Time taken: " << fixed << time_taken1 << setprecision(9) << "s" << endl << endl;



    struct timespec tmStart2, tmEnd2;
    cout << "Loop for first 50 Fibonacci numbers" << endl;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart2);
    for (int i = 0; i < 50; i++)
    {
        res[i] = Fib2(i);
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd2);

    double time_taken2 = tmEnd2.tv_sec - tmStart2.tv_sec + (tmEnd2.tv_nsec - tmStart2.tv_nsec) * 1e-9;
    cout << "Time taken: " << fixed << time_taken2 << setprecision(9) << "s" << endl << endl;


    struct timespec tmStart3, tmEnd3;
    cout << "Recursion + Memoization for first 50 Fibonacci numbers" << endl;
    vector<ll> res2(50, -1);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart3);
    Fib3(49, res2);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd3);

    double time_taken3 = tmEnd3.tv_sec - tmStart3.tv_sec + (tmEnd3.tv_nsec - tmStart3.tv_nsec) * 1e-9;
    cout << "Time taken: " << fixed << time_taken3 << setprecision(9) << "s" << endl << endl;


    struct timespec tmStart4, tmEnd4;
    cout << "Loop + Memoization for first 50 Fibonacci numbers" << endl;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart4);
    Fib4(49, res);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd4);

    double time_taken4 = tmEnd4.tv_sec - tmStart4.tv_sec + (tmEnd4.tv_nsec - tmStart4.tv_nsec) * 1e-9;
    cout << "Time taken: " << fixed << time_taken4 << setprecision(9) << "s" << endl << endl;

    /*
    SpeedUp of all 4 programs with respect to Raw Recursion
    */

    cout << "SpeedUp of Loop (b) with respect to Raw Recursion (a): " << time_taken1 / time_taken2 << endl;
    cout << "SpeedUp of Recursion + Memoization (c) with respect to Raw Recursion (a): " << time_taken1 / time_taken3 << endl;
    cout << "SpeedUp of Loop + Memoization (d) with respect to Raw Recursion (a): " << time_taken1 / time_taken4 << endl;


    return 0;
}