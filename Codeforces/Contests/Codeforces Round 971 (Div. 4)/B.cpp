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
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<4;j++){
                if(s[j]=='#')ans[n-i-1] = j+1;
            }
        }
        for(int i=0;i<n-1;i++){
            cout << ans[i] << " ";
        }
        cout << ans[n-1] << endl;
    }

    return 0;
}






