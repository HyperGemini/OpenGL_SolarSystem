#ifndef OPENGL_SOLARSYSTEM_UTIL_HPP
#define OPENGL_SOLARSYSTEM_UTIL_HPP

#include <GL/glew.h>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Util {

public:
    static std::string readFile(const std::string &path);
    static void checkShaderError(GLuint shader, GLuint status, bool isProgram,
                                 const std::string &errorMessage);
    static std::vector<std::string> split(const std::string &s, const char &c);
};

#endif // OPENGL_SOLARSYSTEM_UTIL_HPP