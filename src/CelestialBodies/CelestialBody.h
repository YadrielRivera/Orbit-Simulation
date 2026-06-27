#pragma once
#include <tuple>
#include <string>

class CelestialBody{

    public:
        std::string name;
        long double massKg;
        long double diameterM;
        long double ageYr;
        std::tuple<double,double> xyPos;
        
        CelestialBody(std::string name, long double massKg, long double diameterM, std::tuple<double,double> xyPos, long int ageYr){

            this->name = name;
            this->massKg = massKg;
            this->diameterM = diameterM;
            this->xyPos = xyPos;
            this->ageYr = ageYr;

        }

        CelestialBody(){}

        std::string getName(){
            return this->name;
        }

        long double getMass(){
            return this->massKg;
        }

        long double getDiameter(){
            return this->diameterM;
        }

        std::tuple<double,double> getXYPos(){
            return this->xyPos;
        }

        virtual ~CelestialBody(){}

};