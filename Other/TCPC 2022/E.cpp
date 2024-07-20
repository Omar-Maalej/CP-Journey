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
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            while(k--){
                int x;
                cin >> x;
                mp[x]++;
            }
        }
        vector<int> ans;
        for(auto e : mp)
            if(e.second > (n-e.second)) ans.push_back(e.first);
        cout << ans.size() << endl;
        for(auto x : ans)
            cout << x << " ";

        cout << endl;
    }
    return 0;
}



