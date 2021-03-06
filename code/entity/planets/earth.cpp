#include "earth.hpp"

Earth::Earth(Loader *loader)
        : Sphere(loader, Texture(loader->loadTexture(Resources::TEXTURE_EARTH)),
                 glm::vec3(Constants::D_FROM_EARTH_EARTH, 0, -25.0), M_PI / 2, 0, 0,
                 Constants::R_EARTH) {}