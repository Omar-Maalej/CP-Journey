#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if((( (n*(n+1))/2) - (((n-k+1)*(n-k))/2)) % 2 == 0)
        cout <<"YES" << endl;
        else cout << "NO" << endl;
        }


    return 0;
}






