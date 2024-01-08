#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;


int main()
{
    fastIO;
    int tst;
    cin >> tst;
    while(tst--){
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      int cnt = 0;
      for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])cnt++;
      }
      cout << ceil((cnt+n%2)/2) << endl;
    }
    return 0;
}


