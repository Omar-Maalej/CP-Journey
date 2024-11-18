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
    int test = 0;
    int cnt = 0;
    for(int i=1;i<s.size();i++){
        if(s[i] > s[0])break;
        else if (s[i] < s[0]){
            test = 1;
            break;
        }
    }
    if(s.size() == 1) cout << (s[0] - '0') + 1 << endl;
    else
    cout << (s.size()-1) * 10 + (s[0]-'0')  - (test) << endl;
    return 0;
}







