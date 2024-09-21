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
        int n,d,k;
        cin >> n >> d >> k;
        vector<pair<int,int>> v;
        while(k--){
            int l,r;
            cin >> l >> r;
            v.push_back({l,r});
        }

        sort(v.begin(), v.end());
        int ind = 0, mx = 0, ansBro = 1;
        for(int i=1;i<=n;i++){
            if(v[ind].second != i){
                mx++;
                ansBro = i;
            }else ind++;
        }
        cout << mx << endl;

    }
    return 0;
}






