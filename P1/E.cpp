#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long e;
    cin >> n >> e;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    vector<int> result(n);
    vector<int> visited(n, 0);
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        vector<int> ciclo;
        int cur = i;
        while (!visited[cur]) {
            visited[cur] = 1;
            ciclo.push_back(cur);
            cur = p[cur];
        }
        int L = ciclo.size();
        for (int j = 0; j < L; j++) {
            int next_pos = (j + e % L) % L;
            result[ciclo[j]] = ciclo[next_pos];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}
