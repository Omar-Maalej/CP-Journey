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
       int n,ways=1,i;
        cin >> n;
        string a1, a2,main_way;
        cin >> a1;
        cin >> a2;
        main_way=a1[0];
        for(i=1;i<n;i++)
        {
            if (a1[i]<=a2[i-1]){
                main_way += a1[i];
            }
            else {
            break;
            }
        }
        for(int j=i-1;j<n;j++) {
            main_way += a2[j];
    }
        i--;
        while(i>0){
            if (a1[i] == a2[i-1]) ways++;
            else break;
            i--;
        }
        cout << main_way << endl;
        cout << ways << endl;
    }


    return 0;
}


