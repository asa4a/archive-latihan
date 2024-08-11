#include <iostream>
using namespace std;

void pangkat_tiga(int a){
    int y = a*a*a;
    cout << y << "\n" << endl;
}

int main(){
    int x;
    for (x = 1; x < 7; x++){
        pangkat_tiga(x);
    }
}