#ifndef OPENGL_SOLARSYSTEM_TEXTURE_HPP
#define OPENGL_SOLARSYSTEM_TEXTURE_HPP

#include <GL/glew.h>

class Texture {

public:
    Texture(GLuint textureID);
    GLuint getTextureID() const;

    float getShineDamper() const;
    void setShineDamper(float shineDamper);
    float getReflectivity() const;

private:
    GLuint textureID;
    float shineDamper = 1;
    float reflectivity = 0;
};

#endif // OPENGL_SOLARSYSTEM_TEXTURE_HPP
