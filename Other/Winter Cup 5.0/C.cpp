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
        int n, k;
        cin >> n >> k;
        int a[n][n];
        memset(a, 0, sizeof(a));
        int ans = INT_MAX;
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            for(int i=0;i<n;i++){
                a[i][y-1]++;
            }
             for(int i=0;i<n;i++){
                if(i!=(y-1))a[x-1][i]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans = min(ans, a[i][j]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}

