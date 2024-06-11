#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long r;
        cin >> r;
        long long y = r;
        long long ans = 0;
        for(long long x = 0; x<=r;x++){
            if((x*x + y*y >= r*r) && ((x*x + y*y) < (r+1)*(r+1))){
                cout << x << " " << y << endl;
                if(x==0 || x == y)ans+=4;
                else ans+= 8;
            }else {y--;}
        }
        cout << ans << endl;
    }


    return 0;
}
