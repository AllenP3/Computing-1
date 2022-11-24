#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int km, fc;
    double averagefc, liters;
    int counter = 0;
    int totalfc = 0;
    while (km != -1){
    cout << "Enter kilometers driven (-1 to quit): ";
    cin >> km;
    if (km == 0){
        cout << "No distance travelled"<<endl;
        break;
    }
    else if (km == -1){
        break;
    }
    else{
    cout << "Enter liters used: ";
    cin >> liters;
    if (liters < 0){
        break;
    }
    else {
        counter += 1;
        fc = (liters/km)*100;
        cout << "Fuel Consumption this tankful per 100 km: "<< fc <<endl;
        totalfc += fc;
        averagefc = totalfc/counter;
        cout << "Average fc " << averagefc<<endl;
    }
    }
    
    }
}