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
        int l,r,L,R;
        cin >> l >> r >> L >> R;
        if(min(r,R) - max(l,L)<0){
            cout << 1 << endl;
        }
    }

    return 0;
}






