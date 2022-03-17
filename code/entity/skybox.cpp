#include "skybox.hpp"

constexpr float SCALE = 400.0f;

Skybox::Skybox(Loader *loader, Camera *camera)
        : camera(camera),
          Entity(
                  TexturedModel(OBJLoader::loadObjModel(Resources::OBJ_SKYBOX, loader),
                                Texture(loader->loadTexture(Resources::TEXTURE_STARS))),
                  glm::vec3(Constants::ORIGIN_X, 0, Constants::ORIGIN_Z), 0, 0, 0,
                  SCALE) {}

void Skybox::update() {
    position.x = camera->getPosition()->x;
    position.y = camera->getPosition()->y;
    position.z = camera->getPosition()->z;
}