#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    if(n<=3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    for(int i=n-1;i>0;i-=2){
        cout << i << " ";
    }
    for(int i=n;i>0;i-=2){
        cout << i << " ";
    }

}

int main(){
    solve();
    return 0;
}
