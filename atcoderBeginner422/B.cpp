#include<bits/stdc++.h>
using namespace std;
int main(){
    int H, W;
    char casa;
    cin >> H >> W;
    vector<string> grid(H+2, string(W+2, '0'));
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){    
            cin >> casa;
            grid[i][j] = casa;
        }
    }
    for(int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){
            if (grid[i][j] == '.'){
                continue;
            }
            int count = 0;
        if (grid[i+1][j] == '#'){
                count++;
            }
            if (grid[i-1][j] == '#'){
                count++;
            }
            if (grid[i][j+1] == '#'){
                count++;
            }
            if (grid[i][j-1] == '#'){
                count++;
            }            
            if (count != 2 && count != 4){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}