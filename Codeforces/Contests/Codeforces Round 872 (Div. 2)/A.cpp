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
        string s;
        cin >> s;
        if(s.size() <= 2){
            cout << -1 << endl;
            continue;
        }
        int cnt = 0;
        for(int i = 0; i < s.size() ; i++){
            cnt += s[i] == s[0];
        }
        if(cnt == s.size())cout << -1 << endl;
        else cout << s.size() - 1 << endl;
    }

    return 0;
}






