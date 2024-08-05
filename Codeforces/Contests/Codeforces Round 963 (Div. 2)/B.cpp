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
        int a[n];
        int biggest_odd = 0, cnt_pair = 0;
        vector<int> pairs;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2 == 1) biggest_odd = max(biggest_odd, a[i]);
            else {
                cnt_pair++;
                pairs.push_back(a[i]);
            }
        }
        if(cnt_pair == 0 || cnt_pair == n){
                cout << 0 << endl;
                continue;
        }
        sort(pairs.begin(), pairs.end());
        int cur = biggest_odd;
        for(int i=0;i<pairs.size();i++){
            if(pairs[i]>cur){
                cnt_pair++;
                break;
            }
            cur+= pairs[i];
        }
        cout << cnt_pair << endl;


    }

    return 0;
}






