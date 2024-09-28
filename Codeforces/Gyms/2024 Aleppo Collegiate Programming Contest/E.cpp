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
        vector<int> cnt(65, 0);
        //cout << (int)log2(0) << endl;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a != 0)
                cnt[(int)log2(a)]++;
        }

        int ans = 0;
        for(int i = 0; i < cnt.size(); i++){
            ans = max(ans, cnt[i]);
        }
        if( ans == 0 )ans = 1;
        cout << fixed << ans << endl;

    }

    return 0;
}






