#include <iostream>
#include <string>
using namespace std;

int main(){
    int input,i,j;
    cin >> input;
    string str = to_string(input);
    int len = str.length();
    if (len % 2 == 1){return 0;}
    for (i = 1; i < len+1; i++){
        cout << str[i-1] << "\t";
        if (i == len/2){ cout << "\n"; }
    }
}