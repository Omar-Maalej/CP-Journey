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
        map<char, char> m;
        set<char> seen;
        char cur = 'a';
        if(s[0] == 'a')cur = 'b';
        m[s[0]] = cur;
        string ans = "";
        ans += cur;

        for(int i=1;i<n;i++){
            if(seen.find(s[0]) != seen.end()){
                cur++;
                ans += cur;
            }
        }

    }

    return 0;
}






