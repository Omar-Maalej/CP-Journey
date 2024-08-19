#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    vector<int> v = {
        0b01111110,
        0b00110000,
        0b01101101,
        0b01111001,
        0b00110011,
        0b01011011,
        0b01011111,
        0b01110000,
        0b01111111,
        0b01110011
    };
    while(t--){
            int n,x,y;
            cin >> n >> x >> y;
            string s,t;
            cin >> s >> t;
            int totalX = 0, totalY = 0;

            for(int i=0;i<n;i++){
                int a = s[i] - '0', b = t[i] - '0';
                totalX+= __builtin_popcount( v[a] &  ~(int32_t)v[b]);
                totalY+= __builtin_popcount( v[b] &  ~(int32_t)v[a]);
            }
            //cout << totalX << " " << totalY << endl;

            if(totalX <= x && totalY <= y)
                cout << "YES" << endl;

            else cout << "NO" << endl;
    }

    return 0;
}







