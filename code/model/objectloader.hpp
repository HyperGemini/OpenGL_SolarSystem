#ifndef OPENGL_SOLARSYSTEM_OBJECTLOADER_HPP
#define OPENGL_SOLARSYSTEM_OBJECTLOADER_HPP

#include "rawmodel.hpp"
#include "loader.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <glm/glm.hpp>
#include "../util/util.hpp"

class OBJLoader {

public:
    static RawModel loadObjModel(const std::string &path, Loader *loader);

private:
    static void processVertex(std::vector<std::string> const &vertexData,
                              std::vector<glm::vec3> const &positions,
                              std::vector<glm::vec2> const &texCoords,
                              std::vector<glm::vec3> const &normals,
                              std::vector<GLuint> &_indices,
                              std::vector<GLfloat> &_positions,
                              std::vector<GLfloat> &_texCoords,
                              std::vector<GLfloat> &_normals);
};

#endif // OPENGL_SOLARSYSTEM_OBJECTLOADER_HPP
