#ifndef OPENGL_SOLARSYSTEM_SUN_HPP
#define OPENGL_SOLARSYSTEM_SUN_HPP

#include "../sphere.hpp"

class Sun : public Sphere {
public:
    explicit Sun(Loader *loader);
};

#endif // OPENGL_SOLARSYSTEM_SUN_HPP
