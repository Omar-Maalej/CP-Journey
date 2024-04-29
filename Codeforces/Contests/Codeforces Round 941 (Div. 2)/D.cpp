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
        int n,k;
        cin >> n >> k;
        vector<int> ans;
        int i=0;
        while((1<<i+1) <= k)
                i++;
        ans.push_back(k+1);
        ans.push_back(k - (1 << i));
        int j=0;
        while(i!=j && j<22);
            ans.push_back(1<<j);
        for(int i=0;i<24;i++){
            cout << ans[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}

