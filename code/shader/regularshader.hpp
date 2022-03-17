#ifndef OPENGL_SOLARSYSTEM_REGULARSHADER_HPP
#define OPENGL_SOLARSYSTEM_REGULARSHADER_HPP

#include "shader.hpp"
#include "../entity/camera.hpp"
#include "../util/math.hpp"

class RegularShader : public Shader {

public:
    RegularShader();

    void bindAttributes() override;
    void getAllUniformLocations() override;

    void loadTransformMatrix(const glm::mat4 &matrix) const;
    void loadProjectionMatrix(const glm::mat4 &matrix) const;
    void loadViewMatrix(Camera *camera) const;

private:
    GLint locationTransform{};
    GLint locationProjection{};
    GLint locationView{};
};

#endif // OPENGL_SOLARSYSTEM_REGULARSHADER_HPP
