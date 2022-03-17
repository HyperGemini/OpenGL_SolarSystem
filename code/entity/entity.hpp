#ifndef OPENGL_SOLARSYSTEM_ENTITY_HPP
#define OPENGL_SOLARSYSTEM_ENTITY_HPP

#include "../model/texturedmodel.hpp"
#include "camera.hpp"

#include <glm/glm.hpp>

class Entity {

public:
    Entity(const TexturedModel &texturedModel, const glm::vec3 &position,
           float rotX, float rotY, float rotZ, float scale);

    void increaseRotation(float dx, float dy, float dz);
    void rotateAroundSun(float time, float orbitSpeed, float radius);

    TexturedModel getTexturedModel() const;
    const glm::vec3 &getPosition() const;
    float getRotX() const;
    float getRotY() const;
    float getRotZ() const;
    float getScale() const;

    void setPosition(const glm::vec3 &position);
    void setRotX(float rotX);
    void setRotY(float rotY);
    void setRotZ(float rotZ);
    void setScale(float scale);

protected:
    float orbitalAngle = 0.0f;

    TexturedModel texturedModel;
    glm::vec3 position;
    float rotX, rotY, rotZ;
    float scale;
};

#endif // OPENGL_SOLARSYSTEM_ENTITY_HPP