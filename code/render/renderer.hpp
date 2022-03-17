#ifndef OPENGL_SOLARSYSTEM_RENDERER_HPP
#define OPENGL_SOLARSYSTEM_RENDERER_HPP

#include "../display/display.hpp"
#include "../entity/entity.hpp"
#include "../shader/sunshader.hpp"
#include "../shader/planetshader.hpp"
#include "../util/math.hpp"
#include "../shader/regularshader.hpp"

#include <GL/glew.h>
#include <glm/gtc/matrix_transform.hpp>

class Renderer {

public:
    Renderer(Display *display, SunShader *sunShader, PlanetShader *planetShader,
             RegularShader *skyboxShader);

    void render(Entity *entity);

private:
    static constexpr float FOV = 70;
    static constexpr float NEAR_PLANE = 0.1f;
    static constexpr float FAR_PLANE = 4000.0f;
    glm::mat4 projection{};

    Display *display;
    SunShader *sunShader;
    PlanetShader *planetShader;
    RegularShader *skyboxShader;

    void createProjectionMatrix();
};

#endif // OPENGL_SOLARSYSTEM_RENDERER_HPP
