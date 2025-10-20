#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        total += v[i].second;
    }
    sort(v.begin(), v.end());
    ll mid = (total + 1) / 2;
    ll acum = 0;
    ll med = 0;
    for (int i = 0; i < n; i++) {
        acum += v[i].second;
        if (acum >= mid) {
            med = v[i].first;
            break;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ans += abs(v[i].first - med) * v[i].second;
    }
    cout << ans << endl;
    return 0;
}