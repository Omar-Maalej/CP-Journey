#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n;
    cin >> n;
    int ans = 0;
    int cnt0 = 0, cnt1 = 0, min0 = INT_MAX, min1 = INT_MAX;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int zero = count(s.begin(), s.end(), '0');
        int one = s.size() - zero;
        min1 = min(min1, one);
        min0 = min(min0, zero);
        if(zero>one){
            cnt0++;
            ans+= one;
        }else{
            cnt1++;
            ans+= zero;
        }
    }

    if(ans>0){
        if(cnt0 == n){
            ans+=
        }
    }


    cout << ans << endl;


    return 0;
}

