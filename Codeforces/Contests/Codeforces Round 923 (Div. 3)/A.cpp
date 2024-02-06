#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ind1 = s.find('B'), ind2 = ind1 + 1;
        for(int i=0;i<n;i++){
            if(s[i]=='B')ind2 = i + 1;
        }
        if(ind1 == -1) cout << 0 << endl;
        else
        cout << ind2 - ind1 << endl;
    }
    return 0;
}
