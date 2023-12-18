#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, int i, int j, int k){
    if(n==0)return;
    TowerOfHanoi(n-1, i, k , j);
    cout << i << " " << k << endl;
    TowerOfHanoi(n-1, j, i , k);
}

int main(){
    int n;
    cin >> n;
    cout << pow(2,n) - 1 << endl;
    TowerOfHanoi(n,1,2,3);
    return 0;
}
