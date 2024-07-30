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
        string s[2];
        cin >> s[0] >> s[1];
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(s[0][i] == '.' && s[1][i] == '.' && s[1][i - 1] == 'x' && s[1][i + 1] == 'x' && s[0][i - 1] == '.' && s[0][i + 1] == '.')
				ans++;
			if(s[1][i] == '.' && s[0][i] == '.' && s[0][i - 1] == 'x' && s[0][i + 1] == 'x' && s[1][i - 1] == '.' && s[1][i + 1] == '.')
				ans++;
        }
        cout << ans << endl;
    }


    return 0;
}






