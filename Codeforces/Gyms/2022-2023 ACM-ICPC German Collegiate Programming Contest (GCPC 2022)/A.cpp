#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int a,b;
    cin >> a >> b;
    int ans;
    if(a == b ) ans = 1;
    else ans = 2;
    bool ta = false, tb = false;
    a--;
    b--;
    int x;
    for(int i=1;i<a;i++){
        x = sqrt((a*a) - (i * i));
        //cout << (a*a) - (i * i) << " " << x << " " << i << endl;
        //cout << sqrt((a*a) - (i * i)) << endl;
        if(x*x == sqrt((a*a) - (i * i)) *sqrt((a*a) - (i * i)))
        {
            ta = true;
            cout << i << endl;
            break;
        }

    }
    a = b;
    for(int i=1;i<a;i++){
        x = sqrt((a*a) - (i * i));
        //cout << (a*a) - (i * i) << " " << x << " " << i << endl;
        //cout << sqrt((a*a) - (i * i)) << endl;
        if(x*x == sqrt((a*a) - (i * i)) *sqrt((a*a) - (i * i)))
        {
            tb = true;
            cout << i <<" " <<  x << endl;
            break;
        }

    }
    if(ta && tb) ans += 4;
    cout << ans << endl;

    return 0;
}






