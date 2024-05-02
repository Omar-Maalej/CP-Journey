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
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int cnt = 0;
        int j=0;
        for(int i=0;i<n && j<n-cnt;i++){
            if(a[j]>b[i]){
                cnt++;
            }else j++;
        }
        cout << cnt << endl;
    }

    return 0;
}

