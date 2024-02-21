#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const long double _PI= 3.141592653589793238;

int main()
{
    // read editorial
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >>y;
        map<pair<int,int>, int> m;
        int ans = 0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(m[make_pair((x - a % x) % x , a % y)])ans+=m[make_pair((x - a % x) % x , a % y)];
            m[make_pair(a % x, a % y)]++;
        }
        cout << ans << endl;
    }

    return 0;
}

