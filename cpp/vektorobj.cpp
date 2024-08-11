#include <iostream>
using namespace std;

class vector{
        int size;
        float *p; //pointer
    public:
        void create_vector(int a);
        void array_vector(int i, float j);
        void change_ele(void);
        void mult_scalar(int c, float b);
        void display();
};

void vector :: create_vector(int a){
    size = a;
    p = new float[size];
}

void vector :: array_vector(int i, float j){
    p[i] = j;
}

void vector :: change_ele(void){
    int x;
    cout << "masukkan elemen yang akan diubah: ";
    cin >> x;
    cout << "masukkan nilai baru elemen ke-"<< x << ": ";
    float y;
    cin >> y;
    p[x-1] = y;
    cout << "array baru" << endl;
}

void vector :: display(void){
    cout<<"p[array]" ;
    for(int i=0; i<size;i++){
            if(i==size-1)
                cout<<p[i];
            else
            cout<<p[i]<<"," ;
        }
}

void vector :: mult_scalar(int c,float b){
    p[c] = p[c] * b;
}

int main(){
    vector vektor;

    cout << "size: ";
    int size_vektor;
    cin >> size_vektor;
    vektor.create_vector(size_vektor);

    for(int i = 0; i<size_vektor; i++){
        float nilai;
        cin >> nilai;
        vektor.array_vector(i,nilai);
    }

    vektor.display();

    vektor.change_ele();

    int skalar;
    cout << "skalar: ";
    cin >> skalar;
    for(int c = 0; c<size_vektor; c++){
        vektor.mult_scalar(c,skalar);
    }

    vektor.display();
}