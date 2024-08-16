#include <iostream>
#include <vector>
#include <iomanip>
#include <ios>
#include <time.h>

#define ll long long

using namespace std;

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

    freopen("output4.txt", "w", stdout);

    vector<ll> res(50);

    cout << "Loop + Memoization for first 50 Fibonacci numbers\n\n";

    struct timespec tmStart, tmEnd;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
    Fib4(49, res);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);
    
    double time_taken = (tmEnd.tv_sec - tmStart.tv_sec) * 1e9;
    time_taken += tmEnd.tv_nsec - tmStart.tv_nsec;
    time_taken /= 1e9;
    cout << "Time taken: " << fixed << time_taken << setprecision(9) << "s\n";
    cout << "Time taken: " << tmEnd.tv_nsec - tmStart.tv_nsec << "ns" << endl << endl;

    for (auto x : res) cout << x << " ";

    return 0;
}