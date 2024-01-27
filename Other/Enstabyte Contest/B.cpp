#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;



int main()
{
    fastIO;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
                if(s[i]>='a' && s[i]<='z')s[i]-=32;
        }
        else {
            if(s[i]>='A' && s[i]<='Z')s[i]+=32;
        }

    }
    cout << s << endl;

    return 0;
}

