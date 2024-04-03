#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    string s;
    int k;
    cin >> s >> k;
    for(int i=0;i<s.size();i++){
        int ind = i;
        for(int j=i;j-i<=k && j<s.size();j++){
            if(s[ind]<s[j])ind = j;
        }
        k-= (ind -i);
        for(int j = ind; j>i;j--){
            swap(s[j],s[j-1]);
        }
    }

    cout << s << endl;


    return 0;
}

