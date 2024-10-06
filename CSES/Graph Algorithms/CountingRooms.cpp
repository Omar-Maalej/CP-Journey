#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == '.'){
               if(i>0 && a[i-1][j]=='.'){
                adj[]
               }
            }
        }
    }


    return 0;
}






