#pragma once

#include "Planet.hpp"

class Earth : public Planet{

    public: 
        long long population;

        Earth(std::tuple<double, double> xyPos){};
};