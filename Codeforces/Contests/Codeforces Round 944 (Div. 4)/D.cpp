#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 1;
        int n = s.size()-1;
        bool test = false;
        bool first = true;
        for(int i=0;i<n;i++){
            if(s[i]=='0')test = true;
            if(s[i]=='1' && s[i+1]=='0'){
                if(test){
                    if(first){
                        first=false;
                    }
                    ans++;
                }else ans++;

            }else if (s[i]=='0' && s[i+1]=='1'){
                if(!first)ans++;
            }

        }
        cout << ans << endl;

    }


    return 0;
}


