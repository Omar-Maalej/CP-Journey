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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        int curSum = a[n-1], curMin = a[n-1], pos = n-1, curMax = a[n-1], posMax = n-1;
        for(int i = n-1; i>0;i--){
            //cout << curMax << " " << curMin << endl;
            if(curMax < a[i-1]){
                curMax = a[i-1];
                posMax = i-1;
            }
            if(curMin > a[i-1]){
                curMin = a[i-1];
                pos = i-1;
            }
            curSum += a[i-1];
            if( a[i]<a[i-1] ){
                curMin = (curSum)/(n-i+1);
               // cout << pos << endl;
                if(posMax == i-1 )curMax = (curSum + (n-i) )/(n-i+1);
            }
        }
       // cout << curMax << " " << curMin << endl;
        cout << abs(curMin - curMax) << endl;
    }


    return 0;
}






