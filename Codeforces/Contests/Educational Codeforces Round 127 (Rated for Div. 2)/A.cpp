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
        int cnt = 0;
        bool ok = true;
        for(int i = 0 ; i < s.size()-1 ; i++){
            //cout << cnt << endl;
            if(s[i]!=s[i+1]){
                if(cnt == 0){
                    ok = false;
                    break;
                }else cnt = 0;
            }else cnt++;
        }
        if(s[s.size()-2]!=s[s.size()-1] && cnt == 0)ok = false;
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}





