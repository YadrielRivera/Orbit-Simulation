#include "headers/Earth.hpp"

Earth::Earth(std::tuple<double, double> xyPos) 
    : Planet("Earth", 5.9722e24, 1.2742e7, xyPos, 4.54e9) {

    std::cout << "Creating Earth..." << std::endl;
    
    this->population = 8e9;
}

void Earth::draw() {
    int hi,wi,nuC;

    std::cout << "Rendering Earth..." << std::endl;

    unsigned char* earthImg = stbi_load("../assets/earth.png", &wi, &hi, &nuC, 4);

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