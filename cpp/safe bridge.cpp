#include <iostream>
using namespace std;

int main(){
    string userInput;
    cin >> userInput;
    int i;
    bool spasi;
    for (char character : userInput){
        if (character == ' '){
            spasi = true;
            break;
        }
    }
    if (spasi = true){ cout << "not safe";}
    else{ cout << "safe";}
    return 0;
}