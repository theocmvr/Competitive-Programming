#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, q;
    cin >> n >> q;
    set<pair<int, int>> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort (v.begin(), v.end());
    for (int i = 0; i < n; i++) s.insert({v[i], i});
    while (q--){
        int x;
        cin >> x;
        auto it = s.lower_bound({x, -1});
        if (it == s.end()) cout << 0 << endl;
        else cout << n - it->second << endl;
    }
    return 0;
}