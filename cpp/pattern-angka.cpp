// program menentukan pattern angka

#include <iostream>
using namespace std;
int main(){
    // input variable
    int x;      
    cout << "input: ";
    cin >> x;

    if (x<1){
        cout << " " << endl;        // if x < 1 output kosong
    }else{
        for (int i = 1; i < x+1; i++){      // loop pattern angka
            for (int j = 1; j < i+1; j++){
                if (j%2 == 1){      // agar outputnya hanya angka ganjil
                    cout << j;  // print
                }
            }
            cout << "\n";
        }
    }
}