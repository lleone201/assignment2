//Created by Logan Leone

#include "jet.h"

Jet::Jet(string brand, string model, string fuelType int numberOfEngines = 1){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfengines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfengines(int numEngines){
    numberOfEngines = numEngines
}

double Jet::mileageEstimate(double time){
    double mileage = ((rand() % 61) + 40)       //Will give a random number between 40 and 100 for mileage calculations
    mileage = mileage * time;

    if (numberOfEngines > 2 && fuelType == "Rocket"){       //Different calculation if numEngines is greater than 2 and fuel type is rocket
        double exp = 0.055 * numberOfEngines;
        mileage = mileage + (mileage *  exp);
    }

    return mileage;
}

string Jet::toString(){
    return "-> Car\n" + PoweredVehicle::toString() + "\n\tNuber of Engines: " +
           getNumberOfEngines();
}


