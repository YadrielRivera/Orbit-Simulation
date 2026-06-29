#pragma once

#include "../CelestialBody.hpp"

class Planet : public CelestialBody{

    public:

    Planet(std::string name, long double massKg, long double diameterM, std::tuple<double, double> xyPos, long double ageYr){
        this->name = name;
        this->ageYr = ageYr;
        this->diameterM = diameterM;
        this->massKg = massKg;
        this->xyPos = xyPos;
    }

    Planet(){}
};