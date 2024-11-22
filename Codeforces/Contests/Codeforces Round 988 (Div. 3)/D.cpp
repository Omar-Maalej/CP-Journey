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
       int n,m,L;
       cin >> n >> m >> L;
       vector<pair<int,int>> hurdles(n);
        for(int i=0;i<n;i++){
            int l,r;
            cin >> l >> r;
            hurdles[i] = {l,r};
        }
        vector<pair<int,int>> powers(m);
        for(int i=0;i<m;i++){
            int x,v;
            cin >> x >> v;
            powers[i] = {x, v};
        }

        priority_queue<int> pq;
        bool ok = true;
        int index = 0, ans=0, curPower = 1;
        for(int i=0;i<n && ok;i++){
            int need = hurdles[i].second - hurdles[i].first + 2;
            while(index < m && powers[index].first < hurdles[i].first){
                pq.push(powers[index].second);
                index++;
            }

            while(!pq.empty() && curPower < need){
                //cout << need << " " << curPower << " " << ans <<  " here" << endl;
                curPower += pq.top();
                pq.pop();
                ans++;
            }
            if(curPower < need)ok = false;
        }



        if(!ok)cout << -1 << endl;
        else cout << ans << endl;
       }



    return 0;
}







