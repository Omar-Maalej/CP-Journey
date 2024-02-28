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
        int sum = 0;
        int cnt1 = 0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            sum+= a;
            if(a%3==1)cnt1++;
        }
        if(sum%3==0)cout << 0 << endl;
        else if (sum%3==1){
            if(cnt1>0)cout << 1 << endl;
            else cout << 2 << endl;
        }else cout << 1 << endl;
    }

    return 0;
}

