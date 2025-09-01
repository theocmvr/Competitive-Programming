#include<bits/stdc++.h>

using namespace std;

void f(int* a){
    *a += 1;
}

void f2(int& a){
    a += 1;
}
int main(){
    int a = 10;
    int* ptr = &a;
    //f(ptr);
    // cout << (*ptr) << endl;
    // *ptr = 20;
    // cout << a << endl;
    f2(a);
    int** ptrptr = &ptr;
    cout << (**ptrptr) << endl;
    cout << a << endl;
    return 0;
}