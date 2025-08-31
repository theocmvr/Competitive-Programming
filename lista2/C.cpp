#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, count = 0;;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    vector<int> C(n+m);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < m; i++){
        cin >> B[i];
    }
    copy(A.begin(), A.end(), C.begin());
    copy(B.begin(), B.end(), C.begin() + n);
    sort(C.begin(), C.end());
    for (int i = 0; i < n+m-1; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if (C[i] == A[j] or C[i+1] == A[j]){
                count++;
            }
        }
        if (count == 2){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}