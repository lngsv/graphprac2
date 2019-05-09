#ifndef GRAPHICS_MESH_H
#define GRAPHICS_MESH_H

#include <GL/glew.h>
#include <vector>

#include "Vertex.h"
#include "Texture.h"
#include "Shader.h"

class Mesh
{
public:
    Mesh(const std::vector<Vertex> &vertices);
    Mesh(const Mesh &other) = delete;
    Mesh(Mesh &&other);
    ~Mesh();

    void Draw() const;

private:
    GLuint m_vao = 0;
    GLuint m_vbo = 0;
    GLuint m_ebo = 0;
    GLsizei m_elCount;
};

#endif
