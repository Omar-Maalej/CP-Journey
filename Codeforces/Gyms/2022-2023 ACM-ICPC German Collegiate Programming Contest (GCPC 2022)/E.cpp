#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    n = min(n, 1000000ll);
    vector<pair<double,double>> fib(n+5);
    fib[1] = {100, 0};
    fib[2] = {0 , 100};
    for(int i = 3;i<=n;i++){
        fib[i].first = 0.5 * fib[i-1].first + 0.5*fib[i-2].first;
        fib[i].second = 0.5 * fib[i-1].second + 0.5*fib[i-2].second;
    }

    cout << setprecision(10) << fixed <<  fib[n].first << " " << fib[n].second << endl;

    return 0;
}







