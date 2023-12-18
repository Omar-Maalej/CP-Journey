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
        string str = s;
        for(char i='1';i<='8';i++){
            if(i!=s[1]){
            str[1] = i;
            cout << str << endl;
            }
        }
        str =s;
        for(char c='a';c<='h';c++){
            if(c!=s[0]){
            str[0] = c;
            cout << str << endl;
            }

        }
    }
    return 0;
}
