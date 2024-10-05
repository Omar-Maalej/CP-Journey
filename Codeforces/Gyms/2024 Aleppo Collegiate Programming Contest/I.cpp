#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int MxN = 1e5+5;


int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        map<pair<int,int>, int> v;
        for(int i=0;i<n;i++){
            int xi,yi,ri;
            cin >> xi >> yi >> ri;
            int x = -ri, y = 0;
            v[{x+xi,y+yi}]++;
            while(x<ri){
                x++;
                if(x == ri)y = 0;
                else
                y = sqrt(ri*ri - x*x);
                //cout << x << " " << y << endl;
                //cout << "start : " << endl;
                int ymove = -y+yi;
                while(ymove <= y+yi){
                    v[{x+xi,ymove}]++;
                  //  cout << x+xi << " " << ymove << endl;
                    ymove++;
                }
            }

        }

        while(q--){
            int x, y;
            cin >> x >> y;
            cout << v[{x,y}] << endl;
        }
    }

    return 0;
}





