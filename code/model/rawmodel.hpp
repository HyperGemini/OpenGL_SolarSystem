#ifndef OPENGL_SOLARSYSTEM_RAWMODEL_HPP
#define OPENGL_SOLARSYSTEM_RAWMODEL_HPP

class RawModel {

public:
    RawModel(int vaoID, int vertexCount);

    int getVaoID() const;
    int getVertexCount() const;

private:
    int vaoID;
    int vertexCount;
};

#endif // OPENGL_SOLARSYSTEM_RAWMODEL_HPP
