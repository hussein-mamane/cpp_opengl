#include <iostream>
//#include "glad.h" // before everything else
#include <GL/glew.h>
#include <GLFW/glfw3.h>

/*
int main() {
//glad+glfw
    if (!glfwInit()) {
        return -1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", NULL, NULL);
    if (!window) {
        // La création de la fenêtre a échoué
        glfwTerminate();
        return -1;
    }

    // Rendre le contexte de la fenêtre courante
    glfwMakeContextCurrent(window);

    // Initialiser GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        // L'initialisation de GLAD a échoué
        return -1;
    }

    // Maintenant, vous pouvez utiliser les fonctionnalités OpenGL normalement

    // Boucle principale
    while (!glfwWindowShouldClose(window)) {
        // ...

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    // Nettoyage
    glfwTerminate();
    return 0;
    
   
}*/
/*glew+glfw*/
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {
    // Initialiser GLFW
    if (!glfwInit()) {
        std::cerr << "Erreur lors de l'initialisation de GLFW." << std::endl;
        return -1;
    }

    // Configurer GLFW pour utiliser le profil OpenGL Core
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Créer une fenêtre GLFW
    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Erreur lors de la création de la fenêtre GLFW." << std::endl;
        glfwTerminate();
        return -1;
    }

    // Rendre le contexte de la fenêtre courante
    glfwMakeContextCurrent(window);

    // Initialiser GLEW
    if (glewInit() != GLEW_OK) {
        std::cerr << "Erreur lors de l'initialisation de GLEW." << std::endl;
        return -1;
    }

    // Définir la fonction de rappel pour le redimensionnement de la fenêtre
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Boucle principale
    while (!glfwWindowShouldClose(window)) {
        // Effacer l'écran
        glClear(GL_COLOR_BUFFER_BIT);

        // Dessiner ici...

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    // Nettoyage
    glfwTerminate();
    return 0;


}
