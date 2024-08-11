#include <iostream>
using namespace std;

// menggabungkan & mengurutkan array
int main(){
    int A[3], B[3], C[6]; // deklarasi array
    // input array A
    cout << "array A: " << endl;
    for (int i = 0; i < 3; i++){
        cin >> A[i];
        if (i < 0 && A[i] < A[i-1]){
            return 0;       // supaya input berurutan
        }
    }
    // input array B
    cout << "array B: " << endl;
    for (int i = 0; i < 3; i++){
        cin >> B[i];
        if (i < 0 && B[i] < B[i-1]){
            return 0;       // supaya input berurutan
        }
    }
    // menggabungkan kedua array
    int j = 0;
    for (int i = 0; i < 3; i++){
        C[j] = A[i];
        C[j+1] = B[i];
        j = j+2;
    }
    // mengurutkan array
    for (int i = 0; i < 5; i++){
        if (C[i] > C[i+1]){
            int temp = C[i];
            C[i] = C[i+1];
            C[i+1] = temp;
        }
    }
    // print
    for (int i = 0; i < 6; i++){
        cout << C[i] << " ";
    }
}