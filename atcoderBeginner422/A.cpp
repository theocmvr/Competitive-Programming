#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    string s;
    cin >> s;
    x = s[0] - '0';
    y = s[2] - '0';
    if (y == 8){
        y = 1;
        x++;
    } else {
        y++;
    }
    s[0] = x + '0';
    s[2] = y + '0';
    cout << s << endl;
    return 0;
}