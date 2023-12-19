#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int maxS = 0;
    int l = 'A';
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==l){
            cnt++;
        }else{
            if(cnt>maxS){
                maxS = cnt;
            }
            l=s[i];
            cnt = 1;
        }
    }
     if(cnt>maxS){
                maxS = cnt;
            }
    cout << maxS << endl;


    return 0;
}
