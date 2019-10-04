//Created by Logan Leone

#ifndef DRIVINGSIMULATOR_JETSKI_H
#define DRIVINGSIMULATOR_JETSKI_H

#include "PoweredVehicle.h"

class Jetski : public PoweredVehicle {

private:
    string hullMaterial;

public:

    explicit Jetski(string brand, string model, string fuelType, string hullMat);

    virtual ~Jetski();
    string getHullMaterial();
    void setHullMaterial(string hullMat);
    virtual double mileageEstimate(double time);
    virtual string toString();

};


#endif //DRIVINGSIMULATOR_JETSKI_H
