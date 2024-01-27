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
        int n, k=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n-1;i++){
            if(a[i+1]<a[i]){
                int d = a[i]-a[i+1];
                k = max(k, (int)floor(log2(d)+1));
                a[i+1]=a[i];
            }
        }
        cout << k << endl;

    }
    return 0;
}

