#include <iostream>
using namespace std;

int main(){
    int sum,x,avg;
    int arr[] = {150,155,165,170,182};
    int arrsize = sizeof(arr)/sizeof(int);
    for (x = 0; x < arrsize; x++){
        sum = sum + arr[x];
    }
    avg = sum/arrsize;
    cout << "rata-rata tinggi badan: " << avg << endl;
}