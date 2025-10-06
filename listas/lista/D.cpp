#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, votos, indice = 0, maior = 0;

    cin >> n >> m;

    vector<int> eleito(n+1, 0);
    
    for (int i = 0; i < m; i++){
        
        cin >> votos;
        eleito[votos]++;
        
        if (eleito[votos] > maior){
        
            maior = eleito[votos];
            indice = votos;
        
        } else if (eleito[votos] == maior){
            
            if (votos < indice){
                indice = votos;
            }
        
        }

        cout << indice << endl;
    
    }
    
    return 0;
}