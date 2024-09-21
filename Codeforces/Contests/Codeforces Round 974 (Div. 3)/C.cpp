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
        int sum = 0;
        int indexMax = 0, mx = -1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+= a[i];
            if(a[i]>mx){
                mx = a[i];
                indexMax = i;
            }
        }

        int l = 0, r = 5*1e11+5;
        while(l<r){
            int mid = l + (r-l)/2;
            int cnt = 0;
            a[indexMax] = mx + mid;
            for(int i=0;i<n;i++){
                if((double)a[i] < (double)(((double)(sum+mid)/n))/2)cnt++;
            }
            if(cnt > n-cnt)r = mid;
            else l = mid+1;
        }
        if(l<5*1e11+5)cout << l << endl;
        else cout << -1 << endl;

    }


    return 0;
}







