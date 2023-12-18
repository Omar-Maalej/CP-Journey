#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll x = a[0] * a[n-1];
        bool test = true;
        int cnt =0;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                if(x/i == i)cnt++;
                else cnt+=2;
                if(!binary_search(a, a+n, i) || !binary_search(a, a+n, x/i)){
                    test = false;
                    break;
                }
                }
        }
      if(cnt!=n)test=false;
      if(test)cout << x << endl;
      else cout << -1 << endl;

    }


    return 0;
}

