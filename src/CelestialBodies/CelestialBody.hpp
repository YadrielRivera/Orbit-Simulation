#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include "../../include/glad/glad.h"
#include "../../include/GLFW/glfw3.h"

#define STB_IMAGE_IMPLEMENTATION
#include "../../include/stb_image/stb_image.h"

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

        virtual void draw() = 0;

        virtual ~CelestialBody(){}

};