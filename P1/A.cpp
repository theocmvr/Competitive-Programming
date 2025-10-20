    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){
        int n;
        cin >> n;
        vector<int> val(n);
        set<int> s2;
        for (int i = 0; i < n; i++){
            cin >> val[i];
        }
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            s2.insert(a);
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if (s2.find(val[i]) != s2.end()) count++;
        }
        cout << count << endl;
        return 0;
    }