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
        int cur = 0, ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]>=k)cur+=a[i];
            if(a[i] == 0 && cur > 0){
                cur--;
                ans++;
            }
        }
        cout << ans << endl;
    }



    return 0;
}






