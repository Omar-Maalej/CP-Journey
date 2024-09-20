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
        int a,b,r;
        cin >> a >> b >> r;

        if(a == b)
            cout << 0 << endl;
        else if (r == 0)
            cout << abs(a-b) << endl;
        else {
            int x = 0;
            if(a>b)
                swap(a,b);
            bool test = true;
            for(int i=60;i>=0;i--){
                int bita = a & (1ll<<i);
                int bitb = b & (1ll<<i);
                if( bita != bitb ){
                    if(test)test=false;
                    else {
                        if((bita == 0 ) && (x + (1ll<<i) <= r)){
                            x += (1ll<<i);
                            a ^= (1ll<<i);
                            b ^= (1ll<<i);
                        }
                    }
                }

            }
            //cout << a << " " << b << " " << x << endl;
            cout << b - a << endl;

        }
    }

    return 0;
}






