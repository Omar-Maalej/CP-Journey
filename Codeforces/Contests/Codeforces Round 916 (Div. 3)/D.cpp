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
        sort(a[0],a[0]+n);
        sort(a[1],a[1]+n);
        sort(a[2],a[2]+n);
        for(int x=0;x<3;x++)
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                for(int k=0;k<3;k++){
                ans = max(ans , a[k][i]+a[k][])
        }
       cout << ans << endl;

    }

    return 0;
}
