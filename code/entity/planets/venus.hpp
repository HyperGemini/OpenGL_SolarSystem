#ifndef OPENGL_SOLARSYSTEM_VENUS_HPP
#define OPENGL_SOLARSYSTEM_VENUS_HPP

#include "../sphere.hpp"

class Venus : public Sphere {
public:
    explicit Venus(Loader *loader);
};

#endif // OPENGL_SOLARSYSTEM_VENUS_HPP