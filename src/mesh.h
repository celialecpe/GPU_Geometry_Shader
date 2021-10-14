#ifndef MESH_H
#define MESH_H

#include <GL/glew.h>
#include <string>
#include <vector>

#include "glm/glm.hpp"

class Mesh
{
  public:

    /***************************************************/
    //         Creation of a mesh
    /***************************************************/
    Mesh() = default;
    // Create a mesh with vertices containing 3D point, 3D normales and 2D uv coordinates
    Mesh(const std::vector<GLfloat>& vertices, const std::vector<GLuint>& indices);
    // Create a mesh according to an obj file
    static Mesh load_from_file(const std::string filename);
    // Create a mesh on a grid on xz plane between -1:1 with NxN elements
    static Mesh create_grid(int N);

    void compute_normales();

    /***************************************************/
    //         Mesh to openGL
    /***************************************************/
    // Load the mesh to a vao, return vao id
    GLuint load_to_gpu() const;
    // Load the mesh to a vbo, return vbo id
    GLuint create_VBO() const;
    // Load the mesh to a ebo, return ebo id
    GLuint create_EBO() const;

    /***************************************************/
    //         Retrieve mesh informations
    /***************************************************/
    unsigned int size_element() const;
    const std::vector<GLfloat>& vert() const {return vertices;};
    const std::vector<GLuint>& idx() const {return indices;};

    /***************************************************/
    //         Modification  mesh
    /***************************************************/
    void apply_matrix(const glm::mat4& m);
    void normalize();


  private:
    std::vector<GLfloat> vertices;
    std::vector<GLuint> indices;
};

#endif
