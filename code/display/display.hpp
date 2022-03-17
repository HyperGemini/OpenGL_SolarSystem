#ifndef OPENGL_SOLARSYSTEM_DISPLAY_HPP
#define OPENGL_SOLARSYSTEM_DISPLAY_HPP

#include <string>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../input/input.hpp"
#include <iostream>

class Display {
public:
    Display(int width, int height, const std::string &title);
    virtual ~Display();

    static void clear(float r, float g, float b, float a);
    void update();

    bool isRunning() const;
    int getWidth() const;
    int getHeight() const;

    GLFWwindow *getWindow() const;

private:
    bool running;
    int width, height;

    GLFWwindow *window{};

    static void initGlfw();
    void initWindow(const std::string &title);
    static void initGlew();
    static void initOpenglFlags();
};

#endif // OPENGL_SOLARSYSTEM_DISPLAY_HPP
