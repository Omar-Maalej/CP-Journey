#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ans=0;
        cin >> n;
        int a[3][n];
        for(int j=0;j<3;j++){
        for(int i=0;i<n;i++){
            cin >> a[j][i];
        }
        }

       cout << ans << endl;

    }

    return 0;
}
