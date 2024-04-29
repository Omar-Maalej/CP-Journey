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
       long long n, k;
       cin >> n >> k;
       long long a[n];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       if(n==1){
        cout << a[0] << endl;
        continue;
       }
       for(int i=0;i<k;i++){
        long long maxDiff = 0, ind=0;
        for(int j=0;j<n-1;j++){
            if(abs(a[j]-a[j+1])>maxDiff){
               maxDiff =  abs(a[j]-a[j+1]);
               ind = j;
            }
        }

        if(a[ind]<a[ind+1])a[ind+1]=a[ind];
        else a[ind]=a[ind+1];
       }
        long long sum = 0;
        for(int i=0;i<n;i++){
        sum+= a[i];
        }
    cout << sum << endl;
    }


    return 0;
}

