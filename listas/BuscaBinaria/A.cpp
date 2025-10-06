#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(q--){
        ll x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end()) cout << "-1" << endl;
        else cout << *it << endl;
    } 
    return 0;
}