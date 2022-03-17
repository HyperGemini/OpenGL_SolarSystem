#include "saturn.hpp"

Saturn::Saturn(Loader *loader)
        : Sphere(loader, Texture(loader->loadTexture(Resources::TEXTURE_SATURN)),
                 glm::vec3(Constants::D_FROM_EARTH_SATURN, 0, -25.0), M_PI / 2, 0,
                 0, Constants::R_SATURN) {}