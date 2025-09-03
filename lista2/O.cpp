#include<bits/stdc++.h>
using namespace std;
int main(){
    int H, W, N, x, y, aux, resp = 0;
    pair<int, int> taka;
    string T;
    cin >> H >> W >> N;
    cin >> T;
    vector<vector<int>> grid(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++){
        string linha;
        cin >> linha;
        for (int j = 0; j < W; j++){
            if (linha[j] == '.'){
                grid[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < H - 1; i++){
        for (int j = 1; j < W - 1; j++){
            if (grid[i][j] == 0){
                continue;
            }
            taka = {i, j};
            aux = 1;
            for (int moves = 0; moves < N; moves++){
                if (T[moves] == 'U'){
                    taka.first--;
                } else if (T[moves] == 'D'){
                    taka.first++;
                } else if (T[moves] == 'R'){
                    taka.second++;
                } else {
                    taka.second--;
                }
                x = taka.first;
                y = taka.second;
                if (grid[x][y] == 0){
                    aux = 0;
                    break;
                }
            }
            if (aux){
                resp++;
            }            
        }
    }
    cout << resp << endl;
    return 0;
}