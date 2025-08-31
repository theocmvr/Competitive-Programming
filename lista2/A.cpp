#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int dentes, op, dente, count = 0;
    cin >> dentes >> op;
    vector<int> zerado(dentes+1,0);
    
    for(int i = 0; i < op; i++){
        
        cin >> dente;
        zerado[dente]++;
    
    }

    for(int i = 0; i <= dentes; i++){
        
        if(zerado[i]%2 != 0){
            count++;
        }

    }

    cout << dentes - count << endl;
    
    return 0;
}