#include <iostream>
using namespace std;

int main(){
    int max = 0;
    int in;
    cin >> in;
    int arr[in];
    for (int i = 0; i < in; i++){
        cin >> arr[i];
    }
    for (int u = 0; u < in; u++){
        if (arr[u] > max){
            max = arr[u];
        }
    }

    int *pointer = &max;
    cout << "largest pointer value " << *pointer;
    return 0;
}