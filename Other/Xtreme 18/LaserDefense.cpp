#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int L, N, M;
    cin >> L >> N >> M;
    vector<int> upper, right;
    int ans = 0;

    for(int i = 0;i<N;i++){
        char c;
        int x;
        cin >> c >> x;
        if(c == 'U')upper.push_back(x);
        else right.push_back(x);
    }
    sort(upper.begin(), upper.end());
    sort(right.begin(), right.end());
    vector<int> upper2, left;
    for(int i = 0 ;i<M;i++){
        char c;
        int x;
        cin >> c >> x;
        if(c == 'U')upper2.push_back(x);
        else left.push_back(x);
    }

    sort(upper2.begin(), upper2.end());
    sort(left.begin(), left.end());

    for(int i = upper2.size()-1;i>=0;i--){
            int x = upper2[i];
            int intersect = right.size()+1;
            int l = 0, r = upper.size();
            if(r != 0){
                while(l <= r){
                    int mid = (l + r)/2;
                    if( upper[mid] >= x)
                        r = mid - 1;
                    else l = mid + 1;
                }
                intersect += max(0ll, (int)(upper.size() - l));
                if(upper[l] == x)intersect--;
                if(left.size() == 0 && i == 0)ans += 2 * intersect;
                else ans += intersect;
            }
            //cout << "u" << x << " " << l << " "<<  intersect << " " << ans << endl;
    }

        for(int i = left.size()-1;i>=0;i--){
            int x = left[i];
            int intersect =  upper.size()+right.size()+1;

                if(i == 0)ans += 2 * intersect;
                else ans += intersect;

            //cout << "l" << x << " " << intersect << " " << ans << endl;
        }


            cout << ans << endl;


    return 0;
}





