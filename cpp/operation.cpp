#include <iostream>
using namespace std;

class FLOAT{
        float data;
    public:
        FLOAT(){};
        FLOAT(float d){data = d;}
        FLOAT addNum(FLOAT f1);
        FLOAT subtrNum(FLOAT f2);
        FLOAT multNum(FLOAT f3);
        FLOAT divNum(FLOAT f4);
        void display();
};

FLOAT FLOAT :: addNum(FLOAT f1){
    FLOAT temp;
    temp.data = data+f1.data;
    return(temp);
}

FLOAT FLOAT :: subtrNum(FLOAT f2){
    FLOAT temp;
    temp.data = data-f2.data;
    return(temp);
}

FLOAT FLOAT :: multNum(FLOAT f3){
    FLOAT temp;
    temp.data = data*f3.data;
    return(temp);
}

FLOAT FLOAT :: divNum(FLOAT f4){
    FLOAT temp;
    temp.data = data/f4.data;
    return(temp);
}

void FLOAT::display(){
    cout << data <<"\n";
}

int main(){

}