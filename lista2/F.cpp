#include<bits/stdc++.h>

using namespace std;

int main(){
    string S, T;
    int n = -1;
    cin >> S >> T;
    for (int i = 0; i < (int)size(S); i++){
        for (int j = n + 1; j < (int)size(T); j++){
            if (T[j] == S[i]){
                cout << j+1;
                if (i == (int)size(S) - 1){
                    cout << endl;
                } else {
                    cout << " ";
                }
                n = j;
                break;
            }
        }
    }
    return 0;
}