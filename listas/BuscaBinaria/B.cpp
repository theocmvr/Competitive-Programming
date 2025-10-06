#include<bits/stdc++.h>
using namespace std;
int main(){
    string grader;
    int l = 1, r = (int)1e9;
    while(l < r){
        int y = (l+r)/2;
        cout << "? " << y << endl;
        cout.flush();
        cin >> grader;
        if (grader == "YES")l = y+1; 
        else r = y;
    }
    cout << "! " << l << endl;
    cout.flush();
    return 0;
}