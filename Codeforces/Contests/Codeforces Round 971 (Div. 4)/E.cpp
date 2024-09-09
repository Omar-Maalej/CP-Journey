#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int sum(int l, int r){
    l--;
    return (r*(r+1))/2 - ((l+1)*l)/2 ;

}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int l = k, r = k+n-1;
        while(l<r){
            //cout << l <<" " << r << endl;
            int mid = l + (r-l+1)/2;
            //cout << mid << " " << sum(k, mid) << " " <<  sum(mid+1, r) << endl;
            if(sum(k, mid)>sum(mid+1, n+k-1))r = mid-1;
            else l = mid;
        }
        //cout << l << endl;
        cout << min((-sum(k,l)+sum(l+1, n+k-1)),(sum(k,l+1)-sum(l+2, n+k-1))) << endl;

    }

    return 0;
}





