#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll k, vector<int> arr, ll mid){
    int count = 1;
    ll somaatual = 0;
    for (int i = 0; i < (int)arr.size(); i++){
        if (somaatual + arr[i] > mid){
            count++;
            somaatual = arr[i];
        } else {
            somaatual += arr[i];
        }
    }
    return count <= k;
}
int main(){
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    ll sub = 0;
    ll ans;
    ll l = *max_element(arr.begin(), arr.end()), r = total, mid;
    while (l <= r){
        mid = l + (r-l)/2;
        if (check(k, arr, mid)){
            ans = mid;
            r = mid-1;
        } else {
            l = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}