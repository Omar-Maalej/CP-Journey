#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    string a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // sort the array by number of leading zeros
    sort(a,a+n, [](string a, string b){
            int i = a.size()-1, j = b.size()-1;
            while(a[i]=='0')i--;
            while(b[j]=='0')j--;
            return (a.size()-i)>(b.size()-j);
         });
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            int j = a[i].size()-1;
            while(a[i][j]=='0')j--;
            cnt+=j+1;
        }else {
            cnt+= a[i].size();
        }
    }
   if(cnt > m )cout << "Sasha" << endl;
   else cout << "Anna" << endl;

    }


    return 0;
}
