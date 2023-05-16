/**
 Calculates the solutions of a quadratic equation ax^2 + bx + c = 0.
 @param a, b, c are coefficients for x^2, x, and 1 (type double).
 @param sol1_ref, sol2_ref are references to the roots (type double&)
 @param sol_count_ref is reference to number of solutions (type int&).
 @return function returns void
*/
#include <math.h>

void QuadraticFormula(double& root1_ref,
 double& root2_ref, int& sol_count_ref, double a, double b, double c)
{
    // calculate discriminant
    double discriminant = b * b - 4 * a*c;
    if (discriminant < 0.0) { // no real roots
        sol_count_ref = 0;
        return;
     } else if (discriminant > 0.0){ // two different real roots
        sol_count_ref = 2;
        root1_ref = (-b + sqrt(discriminant)) / (2 * a);
        root2_ref = (-b - sqrt(discriminant)) / (2 * a);
    } else { // two identical real roots
        sol_count_ref = 1;
        root1_ref = (-b + sqrt(discriminant)) / (2 * a);
        root2_ref = root1_ref;
    }
    return;
}