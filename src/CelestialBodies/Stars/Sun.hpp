#pragma once

#include "Star.hpp"


class Sun : public Star {
    
    public:

        Sun(){
            this->name = "Sun";
            this->massKg = 1.9891e30;
            this->diameterM = 1.392e9;
            this->xyPos = std::tuple<double,double>(0.0, 0.0);
            this->ageYr = 4.6e9;
        }
};