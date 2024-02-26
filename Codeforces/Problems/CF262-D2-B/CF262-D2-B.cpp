#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n && k>0;i++){
        if(a[i]<0){
            a[i]*=-1;
             k--;
        }

    }
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+= a[i];
    if(k%2==0){
        cout << sum << endl;
    }else {
        int m = INT_MAX;
        for(int i=0;i<n;i++)m = min(m, a[i]);
        cout << sum - 2*m << endl;
    }





    return 0;
}
