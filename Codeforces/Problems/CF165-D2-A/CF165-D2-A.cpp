#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    int count =0;
    for(int i=0;i<n;i++){
        bool upper = false, lower = false, right = false, left = false;
        bool ok = false;
        for(int j=0;j<n;j++){
            if(v[i].first == v[j].first && (i!=j)){
                if(v[j].second > v[i].second){
                        upper = true;
                }

                else {
                        lower = true;
                }
            }
            if(v[i].second == v[j].second && (i!=j)){
                if(v[j].first > v[i].first){
                        right = true;
                }
                else {
                        left = true;
                }
            }


        }
        ok = right&&left&&upper&&lower;
        if(ok)count++;
    }
    cout << count << endl;

    return 0;
}
