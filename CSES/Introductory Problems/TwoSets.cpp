#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if((n*(n+1)/2)%2==1){
        cout << "NO" << endl;
    }else{
       cout << "YES" << endl;

       if(n%2==1){
        cout << n/2 + n%2 << endl;
       for(int i=1;i<n-1;i+=4){
        cout << i << " " << i+1 << " ";
       }
       cout << endl;
       cout << n/2 << endl;
       cout << 3 << " ";
       for(int i=4;i<n;i+=4){
        cout << i << " " << i+3 << " ";
       }

       }else{
            cout << n/2<< endl;
            for(int i=1;i<n-1;i+=4){
            cout << i << " " << i+3 << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for(int i=2;i<n;i+=4){
            cout << i << " " << i+1 << " ";
            }

       }

    }
    return 0;
}
