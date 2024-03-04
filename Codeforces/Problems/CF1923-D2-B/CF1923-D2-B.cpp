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
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int x[n];
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin >> x[i];
            mx = max(mx, abs(x[i]));
        }
        vector<int> dist(mx+1, 0);
        for(int i=0;i<n;i++){
            dist[abs(x[i])] += a[i];
        }
        int remainder = 0;
        bool ok = true;
        for(int i=1;i<=mx;i++){
            cout << i << " : " << dist[i] << endl;
            remainder += (k-dist[i]);
            if(remainder < 0){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}

