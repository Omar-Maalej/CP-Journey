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
        int a[2][n];
        for(int j=0;j<2;j++){
            for(int i=0;i<n;i++){
                cin >> a[j][i];
            }
        }
        int pref[n+1], suf[n+1];
        pref[0] = 0;
        suf[n] = 0;
        for(int i=0;i<n;i++){
            pref[i+1] = pref[i] + a[1][i];
        }

        for(int i=n-1;i>=0;i--){
            suf[i] = suf[i+1] + a[0][i];
        }
        int ans = 1e9;
        for(int i=0;i<n;i++){
            ans = min(ans, max(pref[i], suf[i+1]));
        }
        cout << ans << endl;
    }


    return 0;
}







