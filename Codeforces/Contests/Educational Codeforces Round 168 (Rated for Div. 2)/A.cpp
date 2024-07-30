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
        string ans = "";
        bool test = true;
        for(int i=0;i<s.size()-1;i++){
            ans+= s[i];
            if(s[i]==s[i+1] && test){
                    ans+= ((s[i]-'a')+1)%26 + 'a';
                    test = false;
            }
        }
        ans+= s[s.size()-1];
        if(test)ans+= ((s[s.size()-1]-'a')+1)%26 + 'a';

        cout << ans << endl;
    }


    return 0;
}






