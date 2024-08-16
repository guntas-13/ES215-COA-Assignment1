#include <iostream>
#include <vector>
#include <iomanip>
#include <ios>
#include <time.h>

#define ll long long

using namespace std;

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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("output2.txt", "w", stdout);

    cout << "Loop for first 50 Fibonacci numbers\n\n";
    
    vector<ll> res(50);

    struct timespec tmStart, tmEnd;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmStart);
    for (int i = 0; i < 50; i++)
    {
        res[i] = Fib2(i);
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tmEnd);
    
    double time_taken = (tmEnd.tv_sec - tmStart.tv_sec) * 1e9;
    time_taken += tmEnd.tv_nsec - tmStart.tv_nsec;
    time_taken /= 1e9;
    cout << "Time taken: " << fixed << time_taken << setprecision(9) << "s\n";
    cout << "Time taken: " << tmEnd.tv_nsec - tmStart.tv_nsec << "ns" << endl << endl;

    for (auto x : res) cout << x << " ";

    return 0;
}