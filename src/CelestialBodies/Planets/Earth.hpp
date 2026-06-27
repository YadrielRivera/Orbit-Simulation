#pragma once

#include "../CelestialBody.h"

class Earth : public CelestialBody{

    public: 
        long int population;


        Earth(std::tuple<double, double> xyPos){

            this->name = "Earth";
            this->diameterM = 1.2742e7;
            this->massKg = 5.9722e24;
            this->xyPos = xyPos; 
            this->population = 8e9;
            this->ageYr = 4.54e9;
        }
};