#ifndef OPENGL_SOLARSYSTEM_SUNSHADER_HPP
#define OPENGL_SOLARSYSTEM_SUNSHADER_HPP

#include "shader.hpp"
#include "../entity/camera.hpp"
#include "../util/math.hpp"

class SunShader : public Shader {

public:
    SunShader();

    void bindAttributes() override;
    void getAllUniformLocations() override;

    void loadTransformMatrix(const glm::mat4 &matrix);
    void loadProjectionMatrix(const glm::mat4 &matrix);
    void loadViewMatrix(Camera *camera);

private:
    GLint locationTransform{};
    GLint locationProjection{};
    GLint locationView{};
};

#endif // OPENGL_SOLARSYSTEM_SUNSHADER_HPP
