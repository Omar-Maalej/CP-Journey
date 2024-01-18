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
        int n;
        cin >> n;
        string a,b,c;
        cin >> a >> b >> c;
        bool test = false;
        for(int i=0;i<n;i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                    test = true;
                    break;
                }
        }
        if(test)cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}

