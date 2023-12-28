#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char Missing = 'A';
        for(int i=0;i<3;i++){
            string s;
            cin >> s;
            for(char j='A';j<='C';j++){
                if(s.find(j) != std::string::npos)continue;
                else{
                    Missing = j;
                }
            }
        }
        cout << Missing << endl;
    }

    return 0;
}

