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
        int cnt = 0;
        bool adj = false;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                    cnt++;
                    if(s[i+1]=='1')adj= true;
            }
        }
        if(cnt%2 || (cnt == 2 && adj)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }


    return 0;
}

