#ifndef OPENGL_SOLARSYSTEM_LIGHT_HPP
#define OPENGL_SOLARSYSTEM_LIGHT_HPP

#include <glm/glm.hpp>

class Light {
public:
    Light(const glm::vec3 &position, const glm::vec3 &color);

    const glm::vec3 &getPosition() const;
    const glm::vec3 &getColor() const;

    void setColor(const glm::vec3 &color);

private:
    glm::vec3 position;
    glm::vec3 color;
};

#endif // OPENGL_SOLARSYSTEM_LIGHT_HPP