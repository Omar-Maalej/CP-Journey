#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0)return b;
        return a;
    }


int main(){
    int n,m;
    cin >> n >> m;
     if(n==0){
    if(m==0)cout << 0 << endl;
    else{
    for(int i=0;i<m;i++){
            long long b;
            cin >> b;
            cout << b << endl;
            }
    }

    return 0;
    }
    if(n==1){
        long long a1;
        cin >> a1;
         if(m==0)cout << a1 << endl;
        else{
        for(int i=0;i<m;i++){
        long long b;
        cin >> b;
        cout << a1+b << endl;
        }
    }
    return 0;
    }
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long g=0;
    for(int i=1;i<n;i++){
        g = gcd(a[i]-a[0],g);
    }
    for(int i=0;i<m;i++){
        long long b;
        cin >> b;
        cout << gcd(g,b+a[0]) << endl;
    }
    return 0;
}
