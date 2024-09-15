#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

bool check(int k, auto& segments){
            int l = 0, r = 0; // initially at (0,0)
            for(int i = 0; i<segments.size() ; i++){
                l-=k;
                r+=k; // range at segment i
                r = min(r, segments[i].second);
                l = max(l, segments[i].first);
			if (l > r) {
				return false;
			}
            }
            return true;
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> segments(n);
        for(int i=0;i<n;i++){
            int l,r;
            cin >> l >> r;
            segments[i] = {l,r};
        }

        int l = 0, r = 1e9;
        while(l<r){
            int mid = l + (r-l)/2;
            //cout << mid << endl;
            if(!check(mid, segments))
                l = mid +1;
            else r = mid;
        }
        cout << l << endl;
    }


    return 0;
}






