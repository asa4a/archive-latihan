#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    float y = x;
    cout << y;
    cout << typeid(y).name();
}