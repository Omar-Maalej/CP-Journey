#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
            int x,n;
            cin >> x >> n;
            int res = 1;
            for(int i=2; i<=x/n;i++){
                if(x%i==0){
                    res = max(res,i);

                }
            }
            cout << res << endl;
        }




    return 0;
}


