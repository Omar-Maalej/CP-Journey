#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c=='a' || c=='e')
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i=0;
        int k=0;
        while(i<n-1){
            if(k==2){
                if(!isVowel(s[i+1])){
                    cout << s[i] << '.' << s[i+1];
                    k=0;
                    i++;
                }else{
                    cout << '.' << s[i];
                    k=0;
                }
            }else{
                cout << s[i];
            }
            k++;
            i++;
        }
        if(i<n)cout << s[n-1];
        cout << endl;
    }

    return 0;
}

