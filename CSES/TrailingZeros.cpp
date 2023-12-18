#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long cnt=0;
    for(int i=5;i<=n;i*=5){
        cnt+= n/i;
    }
    cout << cnt << endl;
    return 0;
}
