#pragma once

#include "../CelestialBody.h"


class Star : public CelestialBody {
    
    public:

        Star(std::string name, long double massKg, long double diameterM, std::tuple<double, double> xypos, long double ageYr ){
            this->name = name;
            this->massKg = massKg;
            this-> diameterM = diameterM;
            this->xyPos = xypos;
            this->ageYr = ageYr;
        }
        Star(){}

};