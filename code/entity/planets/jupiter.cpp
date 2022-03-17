#include "jupiter.hpp"

Jupiter::Jupiter(Loader *loader)
        : Sphere(loader, Texture(loader->loadTexture(Resources::TEXTURE_JUPITER)),
                 glm::vec3(Constants::D_FROM_EARTH_JUPITER, 0, -25.0), M_PI / 2, 0,
                 0, Constants::R_JUPITER) {}
