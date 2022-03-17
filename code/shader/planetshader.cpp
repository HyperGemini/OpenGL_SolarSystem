#include "planetshader.hpp"

static constexpr char VERTEX_PATH[] = "../shaders/PlanetShader.vert";
static constexpr char FRAGMENT_PATH[] = "../shaders/PlanetShader.frag";

PlanetShader::PlanetShader() : Shader(VERTEX_PATH, FRAGMENT_PATH) {
    getAllUniformLocations();
    bindAttributes();
}

void PlanetShader::bindAttributes() {
    Shader::bindAttribute(0, "position");
    Shader::bindAttribute(1, "texCoord");
    Shader::bindAttribute(2, "normal");
}

void PlanetShader::getAllUniformLocations() {
    locationTransform = Shader::getUniformLocation("transform");
    locationProjection = Shader::getUniformLocation("projection");
    locationView = Shader::getUniformLocation("view");
    locationLightPosition = Shader::getUniformLocation("lightPosition");
    locationLightColor = Shader::getUniformLocation("lightColor");
    locationShineDamper = Shader::getUniformLocation("shineDamper");
    locationReflectivity = Shader::getUniformLocation("reflectivity");
}

void PlanetShader::loadTransformMatrix(const glm::mat4 &matrix) const {
    Shader::loadMatrix(locationTransform, matrix);
}

void PlanetShader::loadProjectionMatrix(const glm::mat4 &matrix) const {
    Shader::loadMatrix(locationProjection, matrix);
}

void PlanetShader::loadViewMatrix(Camera *camera) const {
    glm::mat4 view = Math::createViewMatrix(camera);
    Shader::loadMatrix(locationView, view);
}

void PlanetShader::loadLight(Light *light) const {
    Shader::loadVector(locationLightPosition, light->getPosition());
    Shader::loadVector(locationLightColor, light->getColor());
}

void PlanetShader::loadShineVariables(float damper, float reflectivity) const {
    Shader::loadFloat(locationShineDamper, damper);
    Shader::loadFloat(locationReflectivity, reflectivity);
}