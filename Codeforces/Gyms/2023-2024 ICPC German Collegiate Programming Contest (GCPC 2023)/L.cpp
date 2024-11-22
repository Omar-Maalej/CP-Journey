#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    string s;
    cin >> s;
    int cnt = 0;
    string a = "", b = "";
    bool test = false;
    for(int i=0;i<s.size();i++){
        if(test) a+=s[i];
        else b += s[i];
        if(s[i] == '(')cnt++;
        else cnt--;
        if(cnt == 0)test = true;
    }
    string ans = a + b;
    if(ans == s)cout << "no" << endl;
    else
    cout << ans << endl;

    return 0;
}






