#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> portas(n+1);
    for (int i = 1; i <= n; i++){
        cin >> portas[i];
    }
    int left = 0, right = 0;
    for (int i = 1; i <= n; i++){
        if (portas[i] == 1){
            left = i;
            break;
        }
    }
    for (int i = n; i >= 1; i--){
        if (portas[i] == 1){
            right = i;
            break;
        }
    }
    int resp = (right - left);
    cout << resp << endl;
    return 0;
}