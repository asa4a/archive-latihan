#include <iostream>
using namespace std;

int main(){
    int *p;
    int x[3] = {120,234,4567};
    p = &x[0];
    cout << *p << " berada di alamat " << p << endl;
    cout << *(p+1) << " berada di alamat " << p+1 << endl;
    cout << *(p+2) << " berada di alamat " << p+2 << endl;
}