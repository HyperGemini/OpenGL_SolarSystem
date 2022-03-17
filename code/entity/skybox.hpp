#ifndef OPENGL_SOLARSYSTEM_SKYBOX_HPP
#define OPENGL_SOLARSYSTEM_SKYBOX_HPP

#include "entity.hpp"
#include "camera.hpp"

#include "../model/loader.hpp"
#include "../model/texturedmodel.hpp"
#include "../model/objectloader.hpp"
#include "../util/resources.hpp"

class Skybox : public Entity {
public:
    Skybox(Loader *loader, Camera *camera);
    void update();

private:
    Camera *camera;
};

#endif // OPENGL_SOLARSYSTEM_SKYBOX_HPP