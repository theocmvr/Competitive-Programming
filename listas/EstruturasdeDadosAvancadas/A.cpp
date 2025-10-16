#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> segtree(4*n);
void BuildSegTree(vector<int> &arr, int no, int l = 0, int r = n-1){
    if (l == r){
        if(l < (int)arr.size()) {
            segtree[no] = arr[l];
            return;
        }
    } else {
        int mid = (l+r)/2;
        BuildSegTree (arr, 2*no, l, mid);
        BuildSegTree (arr, (2*no)+1, mid+1, r);
        segtree[no] = segtree[2*no] + segtree[(2*no)+1];
    }
}
void update(int i, int val, int no = 1, int lx = 0, int rx = n-1){
    if (lx == rx) {
        segtree[no] = val;
        return;
    }
    int mid = (lx+rx)/2;
    if (i <= mid) update(i, val, 2*no, lx, mid);
    else update(i, val, (2*no)+1, mid+1, rx);
    segtree[no] = segtree[2*no] + segtree[(2*no)+1];
}
void printTree(vector<int> &segtree, int size){
    int i = 1;
    while (segtree[i] > 0){
        cout << "Valor do no " << i << ": " << segtree[i] << endl;
        i++;
    }
}
int query(){
    
}
int main(){
    int q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    BuildSegTree(arr, 1);
    //printTree(segtree, (int)sizeof(segtree));
    while (q--){
        int type;
        int x, y;
        cin >> type >> x >> y;
        if(type){

        } else {

        }
    } 
    return 0;
}