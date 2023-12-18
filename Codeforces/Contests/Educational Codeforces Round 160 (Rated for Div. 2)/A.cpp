#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        string s;
        cin >> s;
        string sa = "";
        int i=1;
        sa+= s[0];
        while(s[i]=='0'&&i<s.size()-1){
                sa+= s[i];
                i++;
        }

        string sb ="";
        for(int j=i;j<s.size();j++){
            sb+=s[j];
        }
        a=stoi(sa);
        b=stoi(sb);

        if(a<b)cout << a << " " << b << endl;
        else cout << -1 << endl;
        }

     ;

    return 0;
}
