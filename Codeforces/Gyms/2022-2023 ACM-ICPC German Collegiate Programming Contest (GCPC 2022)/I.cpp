#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n, m;
    cin >> n >> m;

    vector<vector<int>> c(n);

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        for(int j=0;j<min(m, n-i);j++){
            int cij;
            cin >> cij;
            c[i].push_back(x-cij);
        }
    }

    int cost = c[0][0];

    for(int i=0;i<n;i++){
        for(int j=0;j<c[i].size();j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}






