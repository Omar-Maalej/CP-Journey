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
        int res;
        int a[4][2];
        for(int i=0;i<4;i++){
            cin >> a[i][0] >> a[i][1];
        }
        int x;
        if(a[1][0]==a[0][0]) x = abs(a[1][1]-a[0][1]);
        else x = abs(a[1][0]-a[0][0]);
        res = x *x;
        cout << res << endl;
    }


    return 0;
}

