#include <iostream>
using namespace std;

int keliling(int r){
    return 3.14 * r * r;
}

int main(){
    int r;
    cin >> r;
    float k = keliling(r);
    cout << k;
}