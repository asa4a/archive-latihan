#include <iostream>
using namespace std;

int n_f(int l, int r){
    int f_result = l;
    for (int i = l+1; i < r; i++){
        f_result = f_result | i;
    }
    return f_result;
}
int factorial(int x){
    long result = 1;
    for (int i = x; i > 1; i--){
        result = result*i;
    }
    return result;
}
int main(){
    int size_n, array_n[size_n];
    cin >> size_n;
    int size_result = factorial(size_n);
    int result_n[size_result];
    for (int i = 0; i < size_n; i++){
        cin >> array_n[i];
    }
    int k = 0;
    for (int i = 0; i < size_n; i++){
        for (int j = i; j < size_n; j++){
            result_n[k] = n_f(array_n[i], array_n[j]);
            cout << result_n[k] << endl;
            k++;
        }
    }
    int n_result = result_n[0];
    for (int i = 1; i < size_result; i++){
        n_result = n_result*array_n[i];
    }
    cout << n_result << endl;
}