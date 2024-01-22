#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x,x+n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        if(sum+1<x[i]){
            break;
        }
        sum+= x[i];
    }
    cout << sum + 1 << endl;
    return 0;
}
