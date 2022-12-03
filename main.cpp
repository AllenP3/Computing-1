#include <iostream>
#include "QuadraticFormula.h"
#include "QuadraticFormula.cpp"
using namespace std;
int main(void)
{
    double a{ 1.0 }, b{ 1.0 }, c{ 1 };
    double root1{ 0.0 }, root2{ 0.0 };
    int no_roots{ 0 };
    cout << "Please enter coefficients a, b, and c of ax2 + bx + c: ";
    cin >> a >> b >> c;
    QuadraticFormula(root1, root2, no_roots, a, b, c);
    switch (no_roots) {
        case 0:
            cout << "No real roots!" << endl;
        break;
        
        case 1:
            cout << "Roots are real and same." << endl;
            cout << "Root 1 = Root 2 = " << root1 << endl;
        break;
        
        case 2:
            cout << "Roots are real and different." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        break;
        
        default:
            cout << "\nShould never get here!";
    };
    return 0;
}