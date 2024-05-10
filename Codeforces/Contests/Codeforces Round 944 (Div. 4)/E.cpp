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
        long long n,k,q;
        cin >> n >> k >> q;
        long long a[k];
        long long b[k];
        for(int i=0;i<k;i++){
            cin >> a[i];
        }
        for(int i=0;i<k;i++){
            cin >> b[i];
        }
        for(int i=0;i<q;i++){
            long long d;
            cin >> d;
            int l = 0;
            int r = k-1;

            while (l < r)
            {
            int mid = (l + r) / 2;

            if (a[mid] < d)
            l = mid + 1;
            else
            {
            r = mid;
            }
            }
            if(r==0)cout << (b[r]*d)/a[r] << " ";
            else cout << ((b[r]-b[r-1])*(d-a[r-1]) / (a[r]-a[r-1])) + b[r-1] <<" ";
    }
    cout << endl;
    }


    return 0;
}


