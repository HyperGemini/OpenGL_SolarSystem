#include "neptune.hpp"

Neptune::Neptune(Loader *loader)
        : Sphere(loader, Texture(loader->loadTexture(Resources::TEXTURE_NEPTUNE)),
                 glm::vec3(Constants::D_FROM_EARTH_NEPTUNE, 0, -25.0), M_PI / 2, 0,
                 0, Constants::R_NEPTUNE) {}