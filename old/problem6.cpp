#include <iostream>

using namespace std;

int main(){
    
    double rad, mass, vol, gmass, Fb, Fg;
    const double y = 9.807;
    const double pi = 3.14;
    
    cout << "Enter the radius of the sphere, in meters: ";
    cin >> rad;
    cout << "Enter the mass of the sphere, in kilograms: ";
    cin >> mass;


    Fg = mass * 9.8 * 1000;
    vol = (4/3)*(rad*rad*rad)*pi;
    Fb = vol * y;

    if (Fb >= Fg){
        cout << "The sphere will float."<<endl;
    }
    else 
        cout << "The sphere will sink."<<endl;





}