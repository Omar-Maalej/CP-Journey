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
        long long n,k;
        cin >> n >> k;
        vector<pair<long long, long long> a;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            v.push_back(make_pair(x,i));
        }
        sort(v.begin(), v.end());
        long long minA = a[0].first , curMax = 0;
        for(int i=0;i<n-1 && k;i++){
            if(minA>curMax)
        }
    }

    return 0;
}

