#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int dist(int x1, int y1, int x2, int y2) {
    return  (x2 - x1) * (x2 - x1) +  (y2 - y1) * (y2 - y1);
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v(n, pair<int,int>(0,0));
        for(int i=0;i<n;i++){
            int a, b;
            cin >> a >> b;
            v[i] = {a,b};
        }
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int minDiff = 3*1e18;
         for(int i=0;i<n;i++){
            minDiff = min(minDiff, dist(v[i].first, v[i].second, c,d) );
        }
        if(minDiff <= dist(a,b,c,d))cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}






