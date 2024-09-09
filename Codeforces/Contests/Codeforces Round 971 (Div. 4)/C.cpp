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
        int x,y,k;
        cin >> x >> y >> k;
        //cout << ((max(x,y)+k-1)/k) * 2 - (x>y) << endl;
        x = (x+k-1)/k;
        y = (y+k-1)/k;
        if(x>y) cout << 2*x-1 << endl;
        else cout << 2*y << endl;
    }

    return 0;
}






