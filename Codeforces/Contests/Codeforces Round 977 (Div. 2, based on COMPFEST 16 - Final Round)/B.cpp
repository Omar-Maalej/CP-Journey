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
        int n, x;
        cin >> n >> x;
        vector<int> cnt(n+1, 0);
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(a<=n)cnt[a]++;
        }

        for(int i = 0;i<=n;i++){
            if(cnt[i] == 0){
                cout << i << endl;
                break;
            }
            if(i+x<=n)cnt[i+x] += cnt[i] - 1;
        }


    }

    return 0;
}





