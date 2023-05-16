#include <iostream>

using namespace std;

int main(){
    double const gprice = 6.08;
    double const gridfee = 29.8;
    double const feedintarr = 9.5;
    double const COP = 4.2;
    double tanktemp, selfcon, heatpumpkwh, powercon;

    while (tanktemp != -1){

        cout << "Enter temperature (or -1 to quit): ";
        cin >> tanktemp; 
        if (tanktemp == -1){
            break;
        }
        else{
        
            if(tanktemp > 80){
            cout << "Switch off heating"<<endl;
            break;}
            
            if(tanktemp >= 55){
                cout << "Unchanged State\n";
                break;
            }
            
            else{
            cout << "Switch on heating"<<endl;
            }
             
             cout << "Enter Consumption (%): ";
             cin >> selfcon;

            if(selfcon < 0 || selfcon > 100){
                break;
            }
            
            else{
            powercon = (100 - selfcon)/100;
            heatpumpkwh = ((gridfee * powercon) + ((powercon/100)*feedintarr)/ COP);

            if (heatpumpkwh <= gprice){
                cout << "Gas heating switched off\nHeat pump switched on\n\n";
            }
            else
            cout << "Gas heating switched on\nHeat pump switched off\n\n";
        
    }}}
    }
        
    