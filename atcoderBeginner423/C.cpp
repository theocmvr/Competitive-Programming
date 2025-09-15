#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, r;
    int count = 0;
    cin >> n >> r;
    vector<int> portas(n+1);
    for (int i = 1; i <= n; i++){
        cin >> portas[i];
    }
    int abertasleft = 0;
    int abertasright = 0;
    for (int i = 1; i <= n; i++){
        if (portas[i] == 0){
            abertasleft = i;
            break; 
        }
    }
    for (int i = n; i >= 1; i--){
        if (portas[i] == 0){
            abertasright = i+1;
            break; 
        }
    }
    for (int i = abertasleft; i < abertasright; i++){
        if (portas[i] == 1){
            portas[i] = 0;
            count++;
        }
    }
    int resp = count + (abertasright - abertasleft);
    cout << resp << endl;
    return 0;
}