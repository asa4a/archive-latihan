#include <stdio.h>
#include <algorithm>
using namespace std;

void add_to_array(char from_input, int len_input){
    int x;
    int num = 0;
    int return_array[3] = {0,0,0};
    for (x = 0; x < len_input; x++){
        if (from_input[x] == ' '){
            if (num == 0){
                if (from_input[0] == "a"){
                    return_array[0] == 1;
                } else { return_array[0] == 0; }
            }
        }
    }
}

int main() {
    int room [] = {0};
    int room_total; 
    scanf("%i",&room_total);
    int x;
    for (x = 0; x < room_total; x++){
        char this_room;
        scanf("%c",&this_room);
        
    }
}

