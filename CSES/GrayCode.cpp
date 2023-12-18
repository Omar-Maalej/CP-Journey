#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<string>> a;
    a.push_back({"0", "1"});
    for(int i=1;i<n;i++){
        int k = pow(2,i+1);
        string s;
        vector<string> str;
        for(int j=0;j<k/2;j++){
            s="0"+a[i-1][j];
            str.push_back(s);
        }
        for(int j=k/2-1;j>=0;j--){
            s="1"+a[i-1][j];
            str.push_back(s);
        }
        a.push_back(str);
    }

        for(int j=0;j<a[n-1].size();j++){
            cout << a[n-1][j] << endl;
        }


    return 0;
}
