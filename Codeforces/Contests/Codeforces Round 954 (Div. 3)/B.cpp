#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n+2, vector<int>(m+2,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]>max({a[i-1][j], a[i+1][j],a[i][j-1],a[i][j+1]}))
                    a[i][j]=max({a[i-1][j], a[i+1][j],a[i][j-1],a[i][j+1]});
            }
        }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
