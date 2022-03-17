#ifndef OPENGL_SOLARSYSTEM_MATH_HPP
#define OPENGL_SOLARSYSTEM_MATH_HPP

#include "../entity/camera.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Math {

public:
    static glm::mat4 createTransformationMatrix(const glm::vec3 &translation,
                                                float rx, float ry, float rz,
                                                float scale);
    static glm::mat4 createViewMatrix(Camera *camera);
};

#endif // OPENGL_SOLARSYSTEM_MATH_HPP