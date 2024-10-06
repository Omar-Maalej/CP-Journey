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
        int b,c,d;
        cin >> b >> c >> d;
        bool carry = false;
        for(int i=0;i<61;i++){
            bool bitb = b && (1ll<<i);
            bool bitc = c && (1ll<<i);
            bool bitc = d && (1ll<<i);


            if(bitc){
                if(bitd){
                   if(!bitb){
                     carry = true;
                   }
                }
            }
        }
    }


    return 0;
}






