#include <iostream>
using namespace std;

int main(){
    int x;
    for (x = 0; x < 1;){
        cout << "Masukkan angka: ";
        int angka;
        cin >> angka;
        if (angka % 3 == 0){
            break;
        } else if (angka % 2 != 0) { 
            cout << "Lanjutkan ke bilangan berikut\n"; 
        }
    }
}