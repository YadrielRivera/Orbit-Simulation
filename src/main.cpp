#include "Input.hpp"

using namespace std;


void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}  


GLFWwindow* setup(){
    glfwInit();
    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    GLFWwindow* window = glfwCreateWindow(800,600, "Orbit Simulation", NULL, NULL);
    
    if(window == NULL){

        cout << "Failed to create window. Terminating process..." << endl;
        glfwTerminate();
        return nullptr;
    }
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){

        cout << "Failed to initialize GLAD. Terminating process..." << endl;
        glfwTerminate();
        return nullptr;
    }

    glViewport(0,0,800,600);

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // base background color
    glClearColor(0.0f,0.0f,0.0f,1.0f);

    return window;
}

void processInput(GLFWwindow* window){
    
    Input::onEscape(window);
}


int main(){

    GLFWwindow* window = setup();   

    //render loop everything happens here
    while (!glfwWindowShouldClose(window))
    {
        //set initial background color
        glClear(GL_COLOR_BUFFER_BIT);

        //always check for input
        processInput(window);

        // goes at the end
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    

    glfwTerminate();
    return 0;
}
