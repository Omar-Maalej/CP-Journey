#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;


int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll cntU = 0, cntL=0;
        vector<int> v;
        if(s==""){
            cout << "\n";
        }else{
            for(ll i=s.length()-1; i>=0;i--){
                if(s[i]=='b'){
                    cntL++;
                }else if (s[i]=='B'){
                    cntU++;
                }else if(s[i]>='a' && s[i]<='z' && cntL)cntL--;

                else if(s[i]>='A' && s[i]<='Z'  && cntU)cntU--;

                else v.push_back(i);

        }
        reverse(v.begin(), v.end());
        string res = "";
        for(auto i : v){
            res += s[i];
        }
        cout << res << endl;
        }

    }

    return 0;
}
