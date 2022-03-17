#ifndef OPENGL_SOLARSYSTEM_PLANETSHADER_HPP
#define OPENGL_SOLARSYSTEM_PLANETSHADER_HPP

#include "shader.hpp"
#include "../entity/camera.hpp"
#include "../util/math.hpp"
#include "../entity/light.hpp"

class PlanetShader : public Shader {

public:
    PlanetShader();

    void bindAttributes() override;
    void getAllUniformLocations() override;

    void loadTransformMatrix(const glm::mat4 &matrix) const;
    void loadProjectionMatrix(const glm::mat4 &matrix) const;
    void loadViewMatrix(Camera *camera) const;
    void loadLight(Light *light) const;
    void loadShineVariables(float damper, float reflectivity) const;

private:
    GLint locationTransform{};
    GLint locationProjection{};
    GLint locationView{};
    GLint locationLightPosition{};
    GLint locationLightColor{};
    GLint locationShineDamper{};
    GLint locationReflectivity{};
};

#endif // OPENGL_SOLARSYSTEM_PLANETSHADER_HPP
