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
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int cur = 0, ans = 0, l = 0, l2 = 0;
        set<int> st;
        for(int i=0;i<n;i++){
            if(cur+a[i]<m){
                cur+=a[i];
                ans = max(ans, cur);
            }else {
                cur-= a[l];
                l++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}






