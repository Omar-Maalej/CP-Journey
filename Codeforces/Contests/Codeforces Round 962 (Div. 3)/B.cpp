#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n][n];
        int sz = n/k;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<n;j++){
                a[i][j] = s[j]-'0';
            }
        }

        for(int i=0;i<sz;i++){
            for(int j=0;j<sz;j++){
                cout << a[i*k][j*k];
            }
            cout << endl;
        }
    }

    return 0;
}






