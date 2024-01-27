#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
int n ; int a=0,b=0 ;
cin>>n ;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        if(i%2==0)a++;else b++ ;
    }
}
if(a==b)cout<<"yes \n";else cout<<"no \n" ;

    return 0;
}

