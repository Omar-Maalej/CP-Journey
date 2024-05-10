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
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[0]){
                test = false;
                swap(s[i],s[0]);
                break;
            }
        }
        if(test) cout << "NO" << endl;
        else {  cout << "YES" << endl;
                cout << s << endl;}
    }


    return 0;
}


