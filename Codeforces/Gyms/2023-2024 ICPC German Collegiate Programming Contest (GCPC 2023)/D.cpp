#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;

    int t, c , o , d , i;
    cin >> t >> c >> o >> d >> i;
    int mn = t + c + o + d + i;
    int mx = 4*t + 6*c + 8*o + 12*d + 20*i;

    vector<int> ans;
    while(mn <= mx){
        ans.push_back(mn);
        ans.push_back(mx);
        mn++;
        mx--;
    }
    if(( t + c + d + o + i ) % 2 == 0)ans.pop_back();
    for(int i = ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }







    return 0;
}






