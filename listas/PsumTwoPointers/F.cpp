#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--){
        int length, start, aux = 1;
        cin >> length >> start;
        int n = length - start;
        vector<int> array(length+1, 0);
        vector<int> somas(start, 0);
        for (int i = 0; i < start; i++) {
            cin >> somas[i];
        }
        for (int j = n+1; j < length; j++){
            array[j] = somas[j-n] - somas[j-n-1];
        }
        if (length == start){
            array[n] = somas[0];
        }
        for (int l = n+1; l < length; l++){
            if (array[l] < array[l-1]){
                aux = 0;
                break;
            }
        }
        if (aux){
            if (n+1 > 1){
                if (somas[0] > (n+1)*array[n+1]){
                    aux = 0;
                }
            }
        }
        if (aux){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}