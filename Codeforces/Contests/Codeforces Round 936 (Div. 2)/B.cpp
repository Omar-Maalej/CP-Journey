#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;
const long long m = 1e9+7;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long maxSum = 0, currSum = 0;
        for(int i=0;i<n;i++){
            currSum+= a[i];
            currSum = max(currSum, 0LL);
            maxSum = max(maxSum, currSum);
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            ans= (ans+a[i]) % m;
        }
        if(maxSum>0){
            for(int i=0;i<k;i++){
                ans = (ans+maxSum)%m;
                maxSum = (maxSum * 2)%m;
            }
        }
        cout << (ans +m)% m<< endl;
    }


    return 0;
}

