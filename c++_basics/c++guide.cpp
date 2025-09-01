#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int x;
    cin >> x;
    cout << (x+10) << endl;
    float f;
    double d;
    double ld =  12345.0 / 678900.0;
    cout << fixed << setprecision(10);
    cout << ld << endl;
    string s;
    cin >> s;
    string t = "d";
    cout << s << endl;
    cout << s.size() << endl;
    cout << (s < t) << endl;
    cout << (s + t) << endl;
    vector<int> v = {1, 2, 3};
    // v.reserve(1000);
    v.push_back(4);
    cout << v.size() << endl;
    vector<int>::iterator it = v.begin();
    // auto it = v.begin();
    // vector<pair<int,int>> vp;
    // array<int,2> arr;
    // pair<int,int> par(3,4);
    // vp.pushback(make_pair(1,2));
    // vp.pushback(par);
    // vp.pushback{{1,2}};
    // par.first;
    // par.second;
    cout << (*it) << endl;
    int n = v.size();
    // sort(v.begin(), v.begin()+n)
    sort(v.begin(),v.end()); // O(n log n)
    reverse(v.begin(),v.end()); // O(n)
    v.erase(v.begin()+3); // O(n)
    return 0;
}