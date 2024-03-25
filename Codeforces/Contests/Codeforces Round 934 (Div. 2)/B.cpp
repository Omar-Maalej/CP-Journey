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
        int n, k;
        cin >> n >> k;
        int a[2*n];
        vector<int> occ(n,0);
        for(int i=0;i<2*n;i++){
            cin >> a[i];
            if(i<n)occ[a[i]-1]++;
        }
        vector<int> v[3];
        for(int i=0;i<n;i++){
            v[occ[i]].push_back(i);

        }
        vector<int> ans[2];

         int x = v[0].size();
        if(x){
            for(int i=0;i<x;i++){
            ans[0].push_back(v[2][i]);
            ans[0].push_back(v[2][i]);
            ans[1].push_back(v[0][i]);
            ans[1].push_back(v[0][i]);

        }
        }


        if(2*x<2*k){
            for(int i=0;i<2*k-2*x;i++){
                ans[0].push_back(v[1][i]);
                ans[1].push_back(v[1][i]);
            }
        }

        for(int i=0;i<2*k;i++){
            cout << ans[0][i]+1 << " ";
        }
        cout << endl;
        for(int i=0;i<2*k;i++){
            cout << ans[1][i]+1 << " ";
        }
        cout << endl;
    }

    return 0;
}

