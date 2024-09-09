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
        vector<vector<int>> a(2, vector<int>(n+5, 0));
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            a[y][x] = 1;
        }
        int ans = 0;
        for(int x = 0;x<=n;x++){
            if(a[0][x] && a[1][x]) ans+= n-2;
            if(a[0][x] && a[1][x+1] && a[0][x+2])ans++;
            if(a[1][x] && a[0][x+1] && a[1][x+2])ans++;
            //cout << ans << endl;
        }
        cout <<ans << endl;

    }

    return 0;
}





