#include <iostream>
using namespace std;

int main(){
    int x,y,i;
    cin >> x;
    int num[100];

    for (i = 0; i < x; i++){
        cin >> num[i];
    }

    if (x % 2 == 0){
        y = x/2;
    } else { y = (x-1)/2; }

    int j = x-1;

    for (i = 0; i < y; i++){
        if (num[i] != num[j]){
            cout << "false";
            return 0;
        }
        j--;
    }
    cout << "true";
}