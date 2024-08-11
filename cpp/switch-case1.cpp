#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout << "Masukkan angka 1: ";
    cin >> a;
    cout << "Masukkan angka 2: ";
    cin >> b;
    cout << "Masukkan operator: ";
    cin >> op;
    switch(op){
        case '*':
        cout << a*b;
        break;
        case '/':
        cout << a/b;
        break;
        case '+':
        cout << a+b;
        break;
        case '-':
        cout << a-b;
        break;
        default:
        cout << "invalid";
    }
}