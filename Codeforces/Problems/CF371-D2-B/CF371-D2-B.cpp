#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int a,b;
    cin >> a >> b;
    if(a==b)cout << 0 << endl;
    else {
        int g = __gcd(a,b);
        int ga = a/g;
        int gb = b/g;
        int ans = 0;
        for(int i=2;i<=5;i++){
            while(ga%i==0){
                    ga/=i;
            ans++;}
            while(gb%i==0){
                    gb/=i;
            ans++;}
        }
        if(ga != 1 || gb!=1)cout << -1 << endl;
        else cout << ans << endl;
    }



    return 0;
}

