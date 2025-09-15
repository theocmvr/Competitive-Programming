#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> vetor(n);
    vector<int> psum(n);
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    psum[0] = vetor[0];
    for(int i = 1; i < n; i++){
        psum[i] = vetor[i] + psum[i-1];
    }
    for (int i = 0; i < q; i++){
        int left, right;
        cin >> left >> right;
        int soma = 0;
        int right2 = left;
        while (right2 <= right && left <= right){
            soma += psum[right2-1] - psum[left-2];
            if (right2 == right){
                left++;
                right2 = left;
                continue;
            }
            right2++;
        }
        cout << soma << endl;
    }
    return 0;
}
