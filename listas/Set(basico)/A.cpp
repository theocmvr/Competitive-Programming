#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    set<int>  set;
    while(n--){
        int num;
        cin >> num;
        set.insert(num);
    }
    while(q--){
        int x;
        cin >> x;
        auto it = set.lower_bound(x);
        if (it == set.end()){
            cout << -1 << endl;
        } else {
            cout << *it << endl;
        }
    }
    return 0;
}