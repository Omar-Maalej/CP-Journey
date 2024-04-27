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
        int n,m;
        cin >> n >> m;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        if(a[0][0] == a[n-1][m-1]){
            cout << "YES" << endl;
            continue;
        }
        int x = 0, y=0, x1 = n-1 , y1 = m-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j] == a[0][0]){
                    x = max(x,i);
                    y = max(y, j);
                }
                if(a[i][j] == a[n-1][m-1]){
                    x1 = min(x1,i);
                    y1= min(y1,j);
                }
            }
        }
        if(x == n-1 && y==m-1){
            cout <<"YES" << endl;
        }else if(x1 == 0 && y1 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;


    }


    return 0;
}

