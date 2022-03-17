#ifndef OPENGL_SOLARSYSTEM_SATURNRINGS_HPP
#define OPENGL_SOLARSYSTEM_SATURNRINGS_HPP

#include "../../model/loader.hpp"
#include "../entity.hpp"
#include "saturn.hpp"

class SaturnRings : public Entity {
public:
    explicit SaturnRings(Loader *loader);
    void update(Saturn *saturn);
};

#endif // OPENGL_SOLARSYSTEM_SATURNRINGS_HPP