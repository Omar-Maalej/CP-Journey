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
        int n,m,k;
        cin >> n >> m >> k;
        int a[n];
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<m;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int cnt = 0, ans = 0;
        map<int, int> cur;
        for(int i=0;i<m;i++){
            cur[a[i]]++;
        }
        for(auto x : cur){
            cnt+= min(x.second, mp[x.first]);
        }
        // cout << cnt << endl;
        if(cnt>=k)ans++;
            for(int i=m;i<n;i++){
                if(cur[a[i-m]]<=mp[a[i-m]]){
                      cnt--;
                }
                cur[a[i-m]]--;
                cur[a[i]]++;
                if(cur[a[i]]<=mp[a[i]])cnt++;
                // cout << cnt << endl;
                if(cnt >= k) ans++;
            }

        cout << ans << endl;

    }

    return 0;
}
