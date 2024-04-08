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
        long long n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long cnt = 0;
        int x = k/2 + k%2;

        for(int i=0;i<n && x>0;i++)
        {
            if(!a[i])break;
            if(a[i]<=x){
                cout << x << ":" << a[i] << endl;
                x-=a[i];
                a[i]=0;
                cnt++;
            }else {
                a[i]-=x;
                break;
            }
        }
        k/=2;
        for(int i=n-1;i>=0 && k>0;i--)
        {   if(!a[i])break;
            if(a[i]<=k){
                cout << k << ":" << a[i] << endl;
                k-=a[i];
                a[i]=0;
                cnt++;
            }else {
                a[i]-=k;
                break;
            }
        }

    cout << cnt << endl;
    }


    return 0;
}


