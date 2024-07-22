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
        int x;
        cin >> x;
        if(x%2==1 && x!=1)
            cout << x/2 << " " << (x+1)/2 << endl;
        else {
            int y = x;
            while(y%2==0)y/=2;
            if(y==1) cout << -1 << endl;
            else {
                int l = y/2 - x/y + 1 , r = y/2 + x/y;
                if(l<=0) l = abs(l)+1;
                cout << l << " " << r << endl;
            }
        }

        }

    return 0;
}






