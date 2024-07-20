#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
     cout <<  (344-12)+(344-37)+(344-60)+(344-311)+(613-365)+(613-328)+(37-12)+(60-37)+(311-60)+(365-328) << endl;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int curMax = 0, ans = 0;
        for(int i=0;i<n-1;i++){
            curMax = max(a[i], curMax);
            if(a[i]>a[i+1]){
                if(a[i+1])
                ans+=a[i+1]-a[i];
                a[i+1]=a[i];
            }
        }
    }

    return 0;
}


