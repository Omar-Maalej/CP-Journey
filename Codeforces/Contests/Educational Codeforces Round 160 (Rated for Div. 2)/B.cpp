#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt0 = 0, cnt1=0;
        int index = 0;
        char l='0';
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')cnt1++;
            else cnt0++;
        }
        if(cnt0==0 || cnt1==0)cout << s.size() << endl;
        else if(cnt0==cnt1){
            cout << 0 << endl;
        }else if(cnt0>cnt1){
            int cnt=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='0')cnt++;
                if(cnt==cnt1){
                    index = i;
                    break;
                }
            }
            index++;
            while(s[index]=='1')index++;
            cout << s.size()-index  << endl;
        }else
        {
            int cnt=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='1')cnt++;
                if(cnt==cnt0){
                    index = i;
                    break;
                }

            }
            index++;
            while(s[index]=='0')index++;
        cout << s.size()-index << endl;
        }
    }
    return 0;
}
