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
        string s;
        cin >> s;
        long long ans = 0, cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')cnt++;
            else if (cnt!=0)ans+=cnt+1;
        }
        cout << ans << endl;
    }


    return 0;
}

