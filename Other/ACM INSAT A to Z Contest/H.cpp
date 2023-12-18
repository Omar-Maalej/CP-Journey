#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    string s;
    cin >> s;
    int cnt=0;
    for(char c='a';c<='z';c++){
        int occ = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)occ++;
        }
        if(occ%2==1)cnt++;
    }
    if(s.size()%2==0){
        if(cnt==0){
                cout << "First" << endl;
        }else cout << "Second" << endl;
    }else{
        cout << "First" << endl;
    }


    return 0;
}
