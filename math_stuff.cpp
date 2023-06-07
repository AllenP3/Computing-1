#include <iostream>

using namespace std;

struct Rectangle{
    double length;
    double width;
};

double area(double length, double width){ //rectangle
    return length * width;
}
double area(double length){ //square

    return length * length;
}
double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}

double pow(double base, int pow = 2){   //default argument if no parameter is provided
    int total = 1;
    for(int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}


int main(){
    /*
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    cout << area(rectangle.length, rectangle.width) << "\n";
    cout << area(rectangle.length) << "\n";
    cout << area(rectangle) << "\n";
    */
    cout << pow(3) << endl;
    return 0;

}