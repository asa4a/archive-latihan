#include <iostream>
using namespace std;

int sumN(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    cin >> a;      // menerima input
    cin >> b;
    int c = sumN(a,b);     // memanggil fungsi untuk menjumlahkan
    cout << c;      // print hasil
}