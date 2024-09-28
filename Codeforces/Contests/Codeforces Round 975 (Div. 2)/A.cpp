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
        int max1 = 0, max2 = 0, cnt = 0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(i%2==0){
                max1=max(max1, a);
                cnt++;
            }else max2 = max(max2, a);
        }

        cout << max(max1 + cnt, max2 + n - cnt) << endl;
    }


    return 0;
}






