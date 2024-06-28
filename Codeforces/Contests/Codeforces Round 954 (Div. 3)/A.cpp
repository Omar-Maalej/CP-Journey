#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int minValue = 1e9;
        for(int i=1;i<=10;i++){
            minValue = min(minValue, abs(x1-i)+abs(x2-i)+abs(x3-i));
        }
        cout << minValue << endl;
    }

    return 0;
}
