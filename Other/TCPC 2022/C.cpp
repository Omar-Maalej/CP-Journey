#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int MxN = 1e7+1;
int32_t main()
{
    fastIO;

    vector<int> next(MxN, 1);
    for(int i=2; i*i<MxN; i++){
        if(next[i]==1){
            for(int j=i*i; j<=MxN; j+=i)
                if(next[j]==1)next[j]=j/i; //greatest divisor excluding itself
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            while(a[i]!=b[i]){
                if(a[i]>b[i])
                    a[i]=next[a[i]];
                else
                    b[i]=next[b[i]];

                ans++;
               // cout << a[i] << " " << b[i] << endl;
            }
            //cout << ans << endl;
        }
        cout << ans << endl;


    }

    return 0;
}



