#include "headers/Earth.hpp"

Earth::Earth(std::tuple<double, double> xyPos){

    std::cout << "Creating Earth..." << std::endl;
    
    this->name = "Earth";
    this->diameterM = 1.2742e7;
    this->massKg = 5.9722e24;
    this->xyPos = xyPos; 
    this->population = 8e9;
    this->ageYr = 4.54e9;
}

void Earth::draw() {
    int hi,wi,nuC;

    std::cout << "Rendering Earth..." << std::endl;

    unsigned char* earthImg = stbi_load("../../assets/earth.png", &hi, &wi, &nuC, 4);

    if (earthImg)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, wi, hi, 0, GL_RGBA, GL_UNSIGNED_BYTE, earthImg);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        stbi_image_free(earthImg);        
        std::cout << "Earth render SUCCESS" << std::endl;
    }
    else
    {
        std::cout << "Earth render FAILURE" << std::endl;
    }
}