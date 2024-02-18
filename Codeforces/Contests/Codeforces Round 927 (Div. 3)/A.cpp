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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        bool test = s[n-1]=='@';
        for(int i=0;i<n-1;i++){
            if(s[i]=='*' && s[i+1]=='*'){
                test = false;
                break;
            }
            if(s[i]=='@')res++;

        }
        if(test)res++;
        cout << res << endl;
    }


    return 0;
}

