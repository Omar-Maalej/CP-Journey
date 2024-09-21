#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int N = 2*1e5+5;
int a[N];

struct Node {
    int mn;
    int mx;
};
Node tree[4*N];

//o(n)
void build(int id, int ns, int ne){
    // cout << id << " " << ns << " " << ne << " " << depth << endl;
    if(ns == ne){
        tree[id] = {a[ns], a[ns]};
        return ;
    }
    int idl = 2*id +1;
    int idr = 2*id + 2;
    int m = (ns + ne)/2;
    build(idl, ns, m);
    build(idr, m+1, ne);
    tree[id].mn = min(tree[idl].mn, tree[idr].mn);
    tree[id].mx = max(tree[idl].mx, tree[idr].mx);

    return;
}

Node query(int l, int r, int id , int ns, int ne){
    //cout << l << " " << r << " " << id << " " << ns << " " << ne << endl;
    if(ns>r ||ne<l){
        Node t;
        t.mn = 1e9+5;
        t.mx = -1e9-5;
        return t;
    }
    if(ns>= l && ne <= r){
        return tree[id];
    }
    int idl = 2*id +1;
    int idr = 2*id + 2;
    int m = (ns + ne)/2;
    Node lq = query(l, r, idl, ns, m);
    Node rq = query(l, r, idr, m+1, ne);
    Node res;
    res.mn = min(lq.mn, rq.mn);
    res.mx = max(lq.mx, rq.mx);
    return res;
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        build(0,0,n-1);
        while(q--){
            int l,r;
            cin >> l >> r;
            l--;
            r--;
            Node res = query(l,r,0,0,n-1);
            if(l == r) cout << "NO" << endl;
            else
            if((r-l+1) % 2 == 1) cout << "NO" << endl;
            else
            if(res.mx != res.mn && (r-l+1)%2 == 0)cout << "NO" << endl;
            else cout << "YES" << endl;
         }

    }
    return 0;
}






