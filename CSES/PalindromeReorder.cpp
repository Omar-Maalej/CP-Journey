#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int occ[26];
     for(char c='A';c<='Z';c++)occ[c]=0;
    int cnt = 0;
    for(char c='A';c<='Z';c++){
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                occ[c]++;
            }
        }
        if(occ[c]%2==1)cnt++;
    }
    if(s.size()%2==1){
        if(cnt!=1){
            cout << "NO SOLUTION" << endl;
        }else{
            int i=0;
            char l;
            for(char c='A';c<='Z';c++){
                if(occ[c]%2==1){
                    l=c;
                }else{
                    while(occ[c]>0){
                    s[i]=c;
                    s[s.size()-1-i]=c;
                    occ[c]-=2;
                    i++;
                }
                }
            }
             while(occ[l]>1){
                    s[i]=l;
                    s[s.size()-1-i]=l;
                    i++;
                    occ[l]-=2;
                }
            s[s.size()/2]=l;
            cout << s << endl;
        }

    }else{
        if(cnt>0){
            cout << "NO SOLUTION" << endl;
        }else{
            int i=0;
            char l;
            for(char c='A';c<='Z';c++){
                    while(occ[c]>0){
                    s[i]=c;
                    s[s.size()-1-i]=c;
                    occ[c]-=2;
                    i++;
                }
                }
            cout << s << endl;

    }
    }
    return 0;
}
