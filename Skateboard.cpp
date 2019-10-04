//Created by Logan Leone

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model){
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){


    double mileage;
    mileage = (((rand() % 5) + 1) / 10);        //Gives us a random number between.1 and .5 for mileage calculations
    mileage = mileage * time;

    if (time > 25 && time < 250){
        double randmileage = ((rand() % 70 + 30) / 100);       //Gives a random number between 1 and 1/3 to come up with the extra mileage
        mileage += randmileage;
    }
    
    return mileage;
}

string Skateboard::toString(){
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}