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
        if(s[0]=='0'){
            cout << 0 << endl;
            continue;
        }
        int ans = 1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?')
                if(i==0)ans*=9;
                else ans *= 10;
        }
        cout << ans << endl;
    }

    return 0;
}

