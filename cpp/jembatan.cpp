#include <iostream>
using namespace std;
int main(){

    // input pelabuhan, jalan, q=1
    int n,m,q;
    cin >> n;
    cin >> m;
    if (m > n){return 0;}
    cin >> q;
    if (q != 1){return 0;}
    cout << "\n";

    // masukkan h
    int h[100];
    for (int i = 0; i<n; i++){
        cin >> h[i];
    }
    cout << "\n";

    // pelabuhan
    int pelabuhan[100];
    int jalan[100];
    for (int i = 0; i<(m);i=i+2;){
        cin >> jalan[i];
        cin >> jalan[i+1]
    }
}