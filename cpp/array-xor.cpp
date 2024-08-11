#include <iostream>
#include <math.h>
using namespace std;

int dtb(int x){
    int binaryNum[32];
    int size_num = 0;
    int result_dtb = 0;
    while (x > 0){
        binaryNum[size_num] = x%2;
        x = x/2;
        size_num++;
    }
    for (int j = size_num-1; j >= 0; j--){
        if (binaryNum[j] == 1){
            result_dtb = result_dtb + pow(10,j);
        }
    }
    return result_dtb;
}

int btd(int x){
    int size_num = 0;
    int result_btd = 0;
    while (x > 0){
        if (x%10 == 1){
            result_btd = result_btd + pow(2,size_num);
        } 
        x = x/10;
        size_num++;
    }
    return result_btd;
}

int main(){
    int array_size;
    cin >> array_size;
    int array_num[array_size];
    int array_xor[array_size];
    for (int i = 0; i < array_size; i++){
        cin >> array_num[i];
        array_num[i] = dtb(array_num[i]);
    }
    int xor_n = 0;
    for (int i = 0; i < array_size; i++){
        for (int j = i+1; j < array_size; j++){
            array_xor[xor_n] = array_num[i]^array_num[j];
            xor_n++;
        }
    }
    xor_n = 1;
    for (int x : array_xor){
        xor_n = xor_n*btd(x);
    }
    cout << xor_n;
}