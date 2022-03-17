#ifndef OPENGL_SOLARSYSTEM_TEXTUREDMODEL_HPP
#define OPENGL_SOLARSYSTEM_TEXTUREDMODEL_HPP

#include "rawmodel.hpp"
#include "../texture/texture.hpp"

class TexturedModel {

public:
    TexturedModel(const RawModel &rawModel, const Texture &texture);

    RawModel getRawModel() const;
    Texture getTexture() const;

private:
    RawModel rawModel;
    Texture texture;
};

#endif // OPENGL_SOLARSYSTEM_TEXTUREDMODEL_HPP
