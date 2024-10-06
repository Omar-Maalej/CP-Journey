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
        int n, k;
        cin >> n >> k;
        int x = k;
        if(k == 1 ){
            cout << n << endl;
            continue;
        }
        while(k<n){
            k*=x;
        }
        if(n == k){
            cout << 1 << endl;
            continue;
        }
        k/=x;
        int ans = 0;
        while(n!=0){
            ans += (n/k);
            n%=k;
            k/=x;
        }
        cout << ans << endl;
    }


    return 0;
}





