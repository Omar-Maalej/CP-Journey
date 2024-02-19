#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
     int n;
     cin >> n;
     map<long long, int> m;
     for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        m[x]++;
     }
     int cnt = 0;
     for(auto i = m.begin(); i != m.end(); i++){
        long long v = i->first;
        long long x = v ^ ((1L << 31) - 1);
        cnt += min(m[x], m[v]);
        m[x]=0;
        m[v]=0;
     }
     cout << n-cnt << endl;

    }
    return 0;


}

