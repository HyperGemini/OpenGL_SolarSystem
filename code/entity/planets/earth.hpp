#ifndef OPENGL_SOLARSYSTEM_EARTH_HPP
#define OPENGL_SOLARSYSTEM_EARTH_HPP

#include "../sphere.hpp"

class Earth : public Sphere {
public:
    explicit Earth(Loader *loader);
};

#endif // OPENGL_SOLARSYSTEM_EARTH_HPP
