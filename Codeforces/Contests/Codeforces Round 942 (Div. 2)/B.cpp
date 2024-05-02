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
        for(int i=0;i<n;i++){
            if(s[i]=='U')cnt++;
        }
        if(cnt%2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

