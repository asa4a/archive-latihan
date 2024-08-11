#include <iostream>
using namespace std;

class circle{
        int radius;
    public:
        void set_value(int);
        int area() {return 3.14 * radius * radius;}
        int perimeter() {return 3.14 * radius * 2;}
        int diameter() {return 2 * radius;}
};

void circle :: set_value(int a){
    radius = a;
}

int main(){
    int r;
    cin >> r;
    circle circle1;
    circle1.set_value(r);
    cout << "diameter: " << circle1.diameter();
    cout << "luas: " << circle1.area();
    cout << "keliling: " << circle1.perimeter();

    return 0;
}
