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
        bool test = true;
        if(s[0]!='1' || s[s.size()-1]=='9')test=false;
        for(int i=1;i<s.size()-1;i++)
            if(s[i]=='0')test=false;

        if(test)cout << "YES" <<endl;
        else cout << "NO" << endl;

    }

    return 0;
}


