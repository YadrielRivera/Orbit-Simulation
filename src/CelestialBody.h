#pragma once
#include <tuple>
#include <string>

class CelestialBody{

    public:
        std::string name;
        long double mass;
        long double diameter;
        std::tuple<double,double> xyPos;
    
    CelestialBody(std::string name, long double mass, long double diameter, std::tuple<double,double> xyPos ){

        this->name = name;
        this->mass = mass;
        this->diameter = diameter;
        this->xyPos = xyPos;

    }

    std::string getName(){
        return this->name;
    }

    long double getMass(){
        return this->mass;
    }

    long double getDiameter(){
        return this->diameter;
    }

    std::tuple<double,double> getXYPos(){
        return this->xyPos;
    }

    virtual ~CelestialBody(){
        
    }

};