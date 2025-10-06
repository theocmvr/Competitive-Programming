#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, total = 0;
    cin >> n;
    bitset<32> binary(n);
    for (int i = 0; i < 32; i++){
        total += binary[i];
    }
    cout << total << endl;
    return 0;
}