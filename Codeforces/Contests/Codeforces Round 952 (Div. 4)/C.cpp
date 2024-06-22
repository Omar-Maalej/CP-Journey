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
        long long curSum = 0, curMax = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            long long a;
            cin >> a;
            if(a>curMax){
                    curSum+= curMax;
                    curMax= a;
            }else {
                curSum+= a;
            }
            if(curMax == curSum)ans++;
            //cout << curSum << " " << curMax << " " << ans << endl;
        }
        cout << ans << endl;
    }

    return 0;
}
