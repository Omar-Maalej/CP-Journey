#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    long long t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
                cin >> a[i];
        }
        long long weakest = *min_element(a,a+n);
        long long strongest = *max_element(a,a+n);
        long long res = min(abs(weakest+k - (strongest-k)),abs(weakest-k - (strongest+k)));
        res = min(res, abs(strongest- weakest));
        cout << res << endl;
    }


    return 0;
}


