#pragma once
#include "App.h"

using namespace std;


class Input{

    public: 
        Input(){} //default constructor 

        static void onEscape(GLFWwindow* window){

            if(glfwGetKey(window, GLFW_KEY_ESCAPE)){
                glfwSetWindowShouldClose(window, GL_TRUE);
            }
        }


};