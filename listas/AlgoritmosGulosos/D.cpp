#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d, tempo = 0, somafim = 0, dtotal = 0;
    cin >> n;
    vector<int> duration(n);
    for (int i = 0; i < n; i++){
        cin >> duration[i] >> d;
        dtotal += d;
    }
    sort (duration.begin(), duration.end());
    for (int i = 0; i < n; i++){
        tempo += duration[i];
        somafim += tempo;
    }
    cout << dtotal - somafim << endl;
    return 0;
}