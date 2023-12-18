#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> v;
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    return 0;
}
