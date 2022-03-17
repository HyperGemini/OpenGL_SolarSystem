#ifndef OPENGL_SOLARSYSTEM_SPHERE_HPP
#define OPENGL_SOLARSYSTEM_SPHERE_HPP

#include "entity.hpp"
#include "../model/loader.hpp"
#include "../util/resources.hpp"
#include "../model/objectloader.hpp"

class Sphere : public Entity {

public:
    Sphere(Loader *loader, const Texture &texture, const glm::vec3 &position,
           float rotX, float rotY, float rotZ, float scale);

    bool isCameraColliding(Camera *camera);
};

#endif // OPENGL_SOLARSYSTEM_SPHERE_HPP
