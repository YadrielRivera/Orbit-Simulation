#include "headers/Planet.hpp"

Planet::Planet(std::string name, long double massKg, long double diameterM, std::tuple<double, double> xyPos, long double ageYr){
        this->name = name;
        this->ageYr = ageYr;
        this->diameterM = diameterM;
        this->massKg = massKg;
        this->xyPos = xyPos;
}

Planet::Planet(){
    std::cout << "Planet: Empty planet creation not allowed." << std::endl; 
}