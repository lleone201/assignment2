//Created by Logan Leone

#include "Jetski.h"

Jetski::Jetski(string brand, string model, string fuelType, string hullMat){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setHullMaterial(hullMat);
}

Jetski::~Jetski() = default;

string Jetski::getHullMaterial(){
    return hullMaterial;
}

void Jetski::setHullMaterial(string hullMat){
    if (hullMat == "plastic" || hullMat == "reinforced carbon fiber"){
        hullMaterial = hullMat;
    }else{
        hullMaterial = "unknown";
    }
}

double Jetski::mileageEstimate(double time){
    //The mileage of a jetski comes from 10 * the time, but if the time is greater than 50,
    //then the mileage is the mileage plus 2% of the time.
    double mileage = 10 * time;
    if (time > 50){
        mileage += .025 * time;
    } 
    return mileage;
}

string Jetski::toString(){
    return "-> Jetski\n" + PoweredVehicle::toString() + "\n\tHull Material: " +
           getHullMaterial();
}
