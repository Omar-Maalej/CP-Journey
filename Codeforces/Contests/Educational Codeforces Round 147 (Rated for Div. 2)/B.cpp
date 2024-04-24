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
        int n;
        cin >> n;
        int a[n], a1[n];

        for(int i=0;i<n; i++){
            cin >> a[i];
        }

        for(int i=0;i<n; i++){
            cin >> a1[i];
        }
        int l = -1, r = -1;
        for(int i=0;i<n;i++){
            if(a[i]!=a1[i]){
                if(l==-1)l=i;
                r = i;
            }
        }
        while(a1[l]>=a1[l-1] && l >= 1){
            l--;
        }
        if(a1[0]<=a1[1]&& l==1)l--;

         while(a1[r]<=a1[r+1] && r < n-1){
            r++;
        }
        if(a1[n-2]<=a1[n-1]&& r==n-2)r++;
        cout << l+1 << " " << r+1 << endl;
    }

    return 0;
}


