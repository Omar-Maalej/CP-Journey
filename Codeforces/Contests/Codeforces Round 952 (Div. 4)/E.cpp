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
        long long x,y,z,k;
        cin >> x >> y >> z >> k;
        long long ans = 0;
        for(long long i=1;i<=x;i++){
            for(long long j=1;j<=y;j++){
                if(k%(i*j) == 0){
                    long long c=k/(i*j);
                    if(c<=z){
                        ans = max(ans, (x-i+1)*(y-j+1)*(z-c+1));
                    }
                }
            }
        }
        cout << ans << endl;

    }

    return 0;
}

