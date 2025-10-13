#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){ 
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0;
    int size = 0;
    set<int> st;
    for(int r = 0; r < n; r++){
        while (st.find(arr[r]) != st.end()){
            st.erase(arr[l]);
            l++;
        }
        st.insert(arr[r]);
        size = max(size, r-l+1);
    }
    cout << size << endl;
    return 0;
}