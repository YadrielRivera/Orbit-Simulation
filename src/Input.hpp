#pragma once

#include "CelestialBodies/Planets/headers/Earth.hpp"
#include "CelestialBodies/Stars/headers/Sun.hpp"

using namespace std;


class Input{

    public: 
        Input(){} //default constructor 

        static void onEscape(GLFWwindow* window){

            if(glfwGetKey(window, GLFW_KEY_ESCAPE)){

                std::cout<< "Closing Program..." << std::endl;
                glfwSetWindowShouldClose(window, GL_TRUE);
            }
        }


};