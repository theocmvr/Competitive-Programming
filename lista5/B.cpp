#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, count = 0, tempo = 0;
    cin >> n >> x;  
    vector<int> algoritmos(n);
    for (int i = 0; i < n; i++){
        cin >> algoritmos[i];
    }
    sort(algoritmos.begin(), algoritmos.end());
    for (int i = 0; i < n; i++){
        if (tempo + algoritmos[i] <= x){
            tempo += algoritmos[i];
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}