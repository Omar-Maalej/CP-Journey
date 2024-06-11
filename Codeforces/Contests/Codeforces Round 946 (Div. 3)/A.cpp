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
        int x,y;
        cin >> x >> y;
        int ans = 0;

        while(y>0){
            ans++;
            y-=2;
            x-=7;
        }
        if(x<=0){
            cout << ans << endl;
        }else if(y == -1){
            x-=4;
            while(x>0){
                ans++;
                x-=15;
            }
            cout << ans << endl;
        }else if (y==0){
            while(x>0){
                ans++;
                x-=15;
            }
            cout << ans << endl;
        }

    }

    return 0;
}

