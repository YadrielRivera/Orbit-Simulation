#include "headers/Star.hpp"

Star::Star(){
    std::cout << "Cannot create empty star object." << std::endl;
}

Star::Star(std::string name, long double massKg, long double diameterM, std::tuple<double, double> xypos, long double ageYr, float SurfTempCel){
            this->name = name;
            this->massKg = massKg;
            this-> diameterM = diameterM;
            this->xyPos = xypos;
            this->ageYr = ageYr;
            this->SurfTempCel = SurfTempCel;
        }