#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, num, cordenada, linha, coluna;
    int countd1 = 0, countd2 = 0;
    cin >> n >> t;
    vector<int> countc(n, 0);
    vector<int> countl(n, 0);
    for (int rodada = 0; rodada < t; rodada++){
        cin >> num;
        cordenada = num - 1;
        linha = cordenada/n;
        coluna = cordenada%n;
        countl[linha]++;
        countc[coluna]++;
        if (linha == coluna){
            countd1++;
        }
        if (linha == n - coluna - 1){
            countd2++;
        }
        if (countl[linha] == n || countc[coluna] == n || countd1 == n || countd2 == n){
            cout << rodada + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;    
    return 0;
}