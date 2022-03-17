#ifndef OPENGL_SOLARSYSTEM_SHADER_HPP
#define OPENGL_SOLARSYSTEM_SHADER_HPP

#include "../util/util.hpp"

#include <string>
#include <iostream>

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader {

public:
    Shader(const std::string &vertexPath, const std::string &fragmentPath);
    virtual ~Shader();

    virtual void bindAttributes() = 0;
    virtual void getAllUniformLocations() = 0;

    void enable() const;
    static void disable();

protected:
    GLint getUniformLocation(const std::string &uniformName) const;
    void bindAttribute(GLint attribute, const std::string &variableName) const;

    static void loadFloat(GLint location, float value);
    static void loadVector(GLint location, const glm::vec3 &vector);
    static void loadMatrix(GLint location, const glm::mat4 &matrix);

private:
    GLuint programID{};
    GLuint vertexShaderID;
    GLuint fragmentShaderID;

    static GLuint loadShader(const std::string &path, GLuint type);
    void loadProgram();
};

#endif // OPENGL_SOLARSYSTEM_SHADER_HPP
