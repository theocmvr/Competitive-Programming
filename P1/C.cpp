#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < k; i++) {
        freq[v[i]]++;
    }
    if ((int)freq.size() == k) count++;
    for (int i = k; i < n; i++) {
        int out = v[i - k];
        freq[out]--;
        if (freq[out] == 0) freq.erase(out);
        freq[v[i]]++;
        if ((int)freq.size() == k) count++;
    }
    cout << count << "\n";
    return 0;
}