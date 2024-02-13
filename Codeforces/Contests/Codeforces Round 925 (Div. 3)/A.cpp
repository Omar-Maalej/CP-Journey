 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s="";
        n-=2;
        for(int i=0;i<3;i++){
            int j=26;
            while(j>=1){
                if(n>=j){
                        s=char(j+96)+s;
                        break;}
                j--;
            }
            n++;
            n-=j;
        }

        cout << s << endl;
    }
    return 0;
}
