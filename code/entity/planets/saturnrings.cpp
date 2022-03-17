#include "saturnrings.hpp"

SaturnRings::SaturnRings(Loader *loader)
        : Entity(
        TexturedModel(OBJLoader::loadObjModel(Resources::OBJ_RINGS, loader),
                      loader->loadTexture(Resources::TEXTURE_RINGS)),
        glm::vec3(Constants::D_FROM_EARTH_SATURN, 0, -25.0), M_PI / 12, 0, 0,
        Constants::R_SATURN) {}

void SaturnRings::update(Saturn *saturn) { setPosition(saturn->getPosition()); }