#include <iostream>
using namespace std;

int main(){
    int array1[6] = {1, 13, 24, 2, 15, 27};
    int i,j,k,array2[6];
    int divarr1[3], divarr2[3];
    for (i = 0; i < 3; i++){
        divarr1[i] = array1[i];
        divarr2[i] = array1[i+3];
    }
    cout << divarr1[0] << " " << divarr1[1] << " " << divarr1[2] << "\n" << endl;
    cout << divarr2[0] << " " << divarr2[1] << " " << divarr2[2] << "\n" << endl;
    for (i = 0; i < 6; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                if (divarr1[j] <= divarr2[k]){
                    array2[i] = divarr1[j];
                } else {
                    array2[i] = divarr2[k];
                }
            }
        }
    }
    for (i = 0; i < 6; i++){
        cout << array2[i] << " " << endl;
    }
}