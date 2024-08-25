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
       int n,m;
       cin >> n >> m;
       vector<set<int>> a;
       for(int i=0;i<n;i++){
            int l;
            cin >> l;
            set<int> s;
            for(int j=0;j<l;j++){
                int e;
                cin >> e;
                s.insert(e);
            }
            a.push_back(s);
            //cout << l << " size " << a[i].size() << endl;
       }

    int maxMex = 0;
    for(int i = 0;i<n;i++){
        int cur =0;
        bool first = true;
        for(auto j : a[i]){
            //cout << j << " ";
            //cout << cur << endl;
            if(cur == j )cur++;
            else if(cur==j-1 && first){
                    cur+=2;
                    first = false;
            }
            else break;
        }
        if(first)cur++;
        maxMex = max(cur,maxMex);
        //cout << endl;
    }
    //cout << "maxMex"  << maxMex << endl;
    if(maxMex<m)
    cout << maxMex * (maxMex+1) + ((maxMex+1+m)*(m-maxMex))/2 << endl;
    else cout << maxMex * (m+1) << endl;
    }

    return 0;
}






