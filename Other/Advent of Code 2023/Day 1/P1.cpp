#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    string s;
    int sum = 0;
    while(cin >> s){
        int first = 0 , last=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                    if(!first)first = s[i]-'0';
                    last = s[i]-'0';
            }
        }

        sum+= first*10 + last;
    }


    return 0;
}

