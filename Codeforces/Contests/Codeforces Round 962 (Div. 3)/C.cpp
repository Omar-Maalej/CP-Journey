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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> prefA(26, vector<int> (n+1, 0)), prefB(26, vector<int> (n+1, 0));
        for(int i=0;i<26;i++){
            for(int j=0;j<n;j++){
                if(a[j] == i+'a') prefA[i][j+1]++;
                if(b[j] == i+'a') prefB[i][j+1]++;
                prefA[i][j+1] += prefA[i][j];
                prefB[i][j+1] += prefB[i][j];
            }
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            l--;
            int ans = 0;
            for(int i=0;i<26;i++){
                ans+= abs((prefA[i][r] - prefA[i][l]) - (prefB[i][r] - prefB[i][l]));
            }
            cout << ans/2 << endl;
        }

    }

    return 0;
}






