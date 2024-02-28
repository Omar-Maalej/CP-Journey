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
      int n;
      cin >> n;
      int a[n];
      map<int, int> occ;
      int maxOcc = INT_MIN, maxE;
      for(int i=0;i<n;i++){
            cin >> a[i];
            occ[a[i]]++;
            if(maxOcc< occ[a[i]]){
                maxOcc = occ[a[i]];
                maxE = a[i];
            }
      }
      bool test = false;
      for(int i=0;i<n;i++){
        if(a[i]%maxE!=0){
                test = true;
                break;
        }
      }
      test |= (maxOcc == 1);
      if(test)cout << "YES" << endl;
      else cout << "NO" << endl;
    }

    return 0;
}



