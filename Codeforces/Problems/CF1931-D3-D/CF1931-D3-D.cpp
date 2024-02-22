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
        long long n,x,y;
        cin >> n >> x >>y;
        map<pair<long long,long long>, long long> m;
        long long ans = 0;
        for(int i=0;i<n;i++){
            long long a;
            cin >> a;
            if(m[make_pair((x - a % x) % x , a % y)])ans+=m[make_pair((x - a % x) % x , a % y)];
            m[make_pair(a % x, a % y)]++;
        }
        cout << ans << endl;
    }

    return 0;
}

