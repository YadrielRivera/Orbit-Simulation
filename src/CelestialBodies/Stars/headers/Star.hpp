#pragma once

#include "../CelestialBody.hpp"


class Star : public CelestialBody {
    
    public:
        float SurfTempCel;

        Star(std::string name, long double massKg, long double diameterM, std::tuple<double, double> xypos, long double ageYr, float SurfTempCel){};
        Star(){};

};