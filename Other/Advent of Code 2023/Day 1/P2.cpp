#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    string s;
    int sum = 0;
    map<string, int> m = {{"one" ,1}, {"two", 2}, {"three", 3}, {"four", 4 }, {"five", 5}, {"six", 6}, {"seven", 7} , {"eight", 8 }, {"nine", 9}};
    while(cin >> s){
        int first = 0 , last=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                    if(!first)first = s[i]-'0';
                    last = s[i]-'0';
            }else{
                for(int j=3; j<=5;j++){
                    if(m.count(s.substr(i, j))){
                        if(!first)first = m[s.substr(i, j)];
                        last = m[s.substr(i, j)];
                    }
                }
            }
        }

        sum+= first*10 + last;
        cout << sum <<  endl;
    }


    return 0;
}


