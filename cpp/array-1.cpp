#include <iostream>
using namespace std;

int main(){
    int num[5];
    int x,y;
    for (x = 0; x < 5; x++){
        cin >> num[x];
        if (num[x] > 101 || num[x] < 0){
            return 0;
        }
    }
    int temp;
    for (x = 0; x < 5; x++){
        for (y = x+1; y < 5; y++){
            if (num[y] > num[x]){
                temp = num[y];
                num[y] = num[x];
                num[x] = temp;
            }
        }
    }

    for (x = 0; x < 5; x++){
        cout << num[x] << "\t ";
    }

    return 0;
}