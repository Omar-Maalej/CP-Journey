#include <bits/stdc++.h>
using namespace std;

const int N = 1<<18;
int a[N];
int tree[4*N];

//o(n)
void build(int id, int ns, int ne, int flag){
    // cout << id << " " << ns << " " << ne << " " << depth << endl;
    if(ns == ne){
        tree[id] = a[ns];
        return ;
    }
    int idl = 2*id +1;
    int idr = 2*id + 2;
    int m = (ns + ne)/2;
    build(idl, ns, m, !flag);
    build(idr, m+1, ne, !flag);
    if(flag)
        tree[id] = tree[idl] | tree[idr];
    else tree[id] = tree[idl] ^ tree[idr];

    return;
}
//o(log(n))
void update(int i, int val, int id , int ns  , int ne , int flag){
    // cout << id << " " << ns << " " << ne << " " << depth << endl;
    if(ns == ne && i == ns){
        a[i]= val;
        tree[id] = val;
        return;
    }
    if(i>ne || i < ns)return;
    int idl = 2*id +1;
    int idr = 2*id + 2;
    int m = (ns + ne)/2;
    update(i, val, idl, ns , m, !flag);
    update(i, val, idr, m+1 , ne, !flag);
    if(flag)
        tree[id] = tree[idl] | tree[idr];
    else tree[id] = tree[idl] ^ tree[idr];
    return;

}


//o(log(n))
int query(int l, int r, int id , int ns, int ne){
    if(ns>r ||ne<r){
        return 0;
    }
    if(ns>= l && ne <= r){
        return tree[id];
    }
    int idl = 2*id +1;
    int idr = 2*id + 2;
    int m = (ns + ne)/2;
    return query(l,r,idl,ns,m) | query(l,r,idl,m+1,ne);
}

int main(){
    int n, m;
    cin >> n >> m;
    int x = (1<<n);
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    build(0,0,x-1,n&1);
    for(int i=0;i<m;i++){
        int p,v;
        cin >> p >> v;
        p--;
        update(p,v,0,0,x-1,n&1);
        cout << tree[0] << "\n";
    }






    return 0;
}

