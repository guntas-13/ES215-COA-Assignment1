#include <iostream>
#include <vector>
#include <time.h>
#include <iomanip>
#include <ios>

#define ll long long

using namespace std;

ll Fib3(int n, vector<ll>& dp)
{
    if (n <= 1) return dp[n] = n;
    
    if (dp[n] != -1) return dp[n];

    return dp[n] = Fib3(n - 1, dp) + Fib3(n - 2, dp);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("output3.txt", "w", stdout);

   cout << "Recursion + Memoization for first 50 Fibonacci numbers\n\n";

    vector<ll> res(50, -1);
    struct timespec tmStart, tmEnd;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
    Fib3(49, res);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);
    
    double time_taken = (tmEnd.tv_sec - tmStart.tv_sec) * 1e9;
    time_taken += tmEnd.tv_nsec - tmStart.tv_nsec;
    time_taken /= 1e9;
    cout << "Time taken: " << fixed << time_taken << setprecision(9) << "s\n";
    cout << "Time taken: " << tmEnd.tv_nsec - tmStart.tv_nsec << "ns" << endl << endl;

    for (auto x : res) cout << x << " ";

    return 0;
}