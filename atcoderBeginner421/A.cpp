#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    vector<string> nomes(100);
    string y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> nomes[i];
    }
    cin >> x >> y;
    if (nomes[x-1] == y){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}