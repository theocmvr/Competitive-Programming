#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 2e5;
vector<ll> segtree(4*MAX);
void BuildSegTree(vector<int> &arr, int no = 1, int l = 0, int r = MAX-1){
    if (l == r){
        if (l < (int)arr.size()){
            segtree[no] = arr[l];
        } else {
            segtree[no] = 0;
        }
        return;
    } else {
        int mid = (l+r)/2;
        BuildSegTree (arr, 2*no, l, mid);
        BuildSegTree (arr, (2*no)+1, mid+1, r);
        segtree[no] = segtree[2*no] + segtree[(2*no)+1];
    }
}
void update(int i, int val, int no = 1, int lx = 0, int rx = MAX-1){
    if (lx == rx) {
        segtree[no] = val;
        return;
    }
    int mid = (lx+rx)/2;
    if (i <= mid) update(i, val, 2*no, lx, mid);
    else update(i, val, (2*no)+1, mid+1, rx);
    segtree[no] = segtree[2*no] + segtree[(2*no)+1];
}
// void printTree(vector<int> &segtree, int size){
//     int i = 1;
//     while (segtree[i] > 0){
//         cout << "Valor do no " << i << ": " << segtree[i] << endl;
//         i++;
//     }
// }
ll query(int l, int r, int no = 1, int lx = 0, int rx = MAX-1){
    if (l <= lx and rx <= r) return segtree[no];
    if (r < lx or l > rx) return 0;
    int mid = (lx+rx)/2;
    ll s1 = query(l, r, 2*no, lx, mid);
    ll s2 = query(l, r, (2*no)+1, mid+1, rx);
    //cout << s1+s2 << endl;
    return s1+s2;
}
int main(){ cin.tie(0)->sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    BuildSegTree(arr);
    //printTree(segtree, (int)sizeof(segtree));
    while (q--){
        int type;
        int l, r, i, val;
        cin >> type;
        if(type == 1){
            cin >> i >> val;
            i--;
            update(i, val);
        } else {
            cin >> l >> r;
            l--;
            r--;
            ll resp = query(l, r);
            cout << resp  << endl;
        }
    }
    return 0;
}