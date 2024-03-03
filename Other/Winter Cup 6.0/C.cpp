#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    long long t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n ; ll a[n];
            for(ll i=0;i<n;i++)
            {
                cin>>a[i];
            }

   ll l=0,maxD=0, currD=0;
   for(ll i=1;i<n;i++)
   {
       if(a[i]>a[i-1]){
           currD+=(a[i]-a[i-1]);
       }
       else{
            maxD=max(maxD,currD);
            currD=0;
            }
   }
            maxD=max(maxD,currD);
   cout<<maxD<<"\n";

   }



    return 0;
}



