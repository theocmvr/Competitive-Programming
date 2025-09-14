#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int ans = 0, right = 0;
    for (int left = 0; left < n; left++){
        while (right < n && array[right] < array[left] + m){
            right++;
        }
        ans = max(ans, right-left);
    }
    cout << ans << endl;
    return 0;
}