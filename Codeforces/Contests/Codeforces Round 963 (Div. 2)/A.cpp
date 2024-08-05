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
        string s;
        cin >> s;
        map<char, int> m;
        for(int i=0;i<4*n;i++){
            m[s[i]]++;
        }
        int ans = 0;
        for(auto it : m){
            //cout << it.first << " " << it.second << endl;
            if(it.first != '?')ans+=min(n, it.second);
        }
        cout << ans << endl;
    }

    return 0;
}






