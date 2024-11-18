#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int lcm(int a, int b){
    return (a / __gcd(a,b)*b);

}
int32_t main()
{
    fastIO;
    int n, k;
    cin >> n >> k;
    vector<int> e(k);
    for(int i=0;i<k;i++){
        cin >> e[i];
    }
    sort(e.begin(), e.end());
    int ans = 0;
    for(int i=0;i<k;i++){
        ans += (n/e[i]);
    }
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            ans -= (n / lcm(e[i], e[j]));
        }
    }

    cout << ans << endl;
    return 0;
}






