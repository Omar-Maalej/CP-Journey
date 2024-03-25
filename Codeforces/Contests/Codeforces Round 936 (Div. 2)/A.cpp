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
        int median,ans =1;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        median = a[(n+1)/2-1];
        for(int i=(n+1)/2; i<n;i++){
            if(a[i]!=median)break;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}

