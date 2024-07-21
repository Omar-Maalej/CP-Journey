#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n, x;
    cin >> n >> x;
    string s, t;
    cin >> s;
    cin >> t;
    x = x%n;
    while(x--){
        char c = s[n-1];
        s.erase(n-1);
        s = c + s;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += (s[i]!=t[i]);
    }
    cout << ans << endl;



    return 0;
}





