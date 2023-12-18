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
        int w[n];
        for(int i=0;i<n;i++){
            cin >> w[i];
        }
        int l = 0, r = n-1;
        int lsum = w[0], rsum = w[n-1];
        int num = 0;
        while(r>l){
            if(lsum > rsum){
                r--;
                rsum+= w[r];
            }else if(lsum < rsum){
                l++;
                lsum += w[l];
            }else{
                num = l+1 + (n-r);
                l++;
                lsum+= w[l];
            }
        }
        cout << num << endl;
    }

    return 0;

}
