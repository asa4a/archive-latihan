#include <iostream>
using namespace std;

int main(){
    int *p;
    int x;
    p = &x;
    x = 10;
    cout << x << "\n";
    cout << *p << "\n";
    cout << p << "\n";
    cout << &x << "\n";
}