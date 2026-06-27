#pragma once

#include "../CelestialBody.h"


class Sun : public CelestialBody {
    
    public:

        Sun(){

            this->name = "Sun";
            this->mass = 1.9891e30;
            this->diameter = 1.392e9;
            this->xyPos = std::tuple<double,double>(0.0, 0.0);
        }

        Sun(std::string name, long double mass, long double diameter, std::tuple<double, double> xypos ){
            this->name = name;
            this->mass = mass;
            this-> diameter = diameter;
            this->xyPos = xypos;
        }
        



};