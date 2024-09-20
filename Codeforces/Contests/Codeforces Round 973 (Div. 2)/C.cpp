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
        string ans = "1";
        int times = 0;
        bool reached = false;
        while(ans.size() <= n){
            cout << "? " << ans << endl;
            int x;
            cin >> x;
            if(!reached){
                 if(x == 0){
                if(times == 0){
                    ans[ans.size() - 1] = '0';
                }else if (times == 1){
                    reached = true;
                    ans = '0' + ans;
                    ans.pop_back();
                    ans = '1' + ans;
                }
            }else if( x == 1 ) ans+= "1";
            }else {
                if(x==0){
                    ans.erase(ans.begin());
                    ans = '0' + ans;
                }else ans = '1' + ans;
            }

            if(x == 0)times = (times+1)%2;
            else times = 0;
        }
        if(!reached)ans.pop_back();
        else  ans.erase(ans.begin());
        cout << "! " << ans << endl;
    }


    return 0;
}





