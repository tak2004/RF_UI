#include "RadonFramework/Drawing/OpenGL/OpenGLModel.hpp"
#include "RadonFramework/Drawing/OpenGL/OpenGL.hpp"

namespace RadonFramework::Drawing
{
void OpenGLModel::Generate(RF_Type::Float32* Vertices,
                           RF_Type::Size VertexCount,
                           RF_Type::Size ElementsPerVertex)
{
  glGenBuffers(1, m_VBOs);
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
  glBufferData(RF_GL::GL_ARRAY_BUFFER,
               VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
               Vertices, RF_GL::GL_STATIC_DRAW);

  glGenVertexArrays(1, &m_VAO);
  glBindVertexArray(m_VAO);
  m_VertexCount = VertexCount;
  glVertexAttribPointer(0, ElementsPerVertex, RF_GL::GL_FLOAT, RF_GL::GL_FALSE,
                        0, NULL);
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
  glEnableVertexAttribArray(0);
  glBindVertexArray(0);
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, 0);
}

void OpenGLModel::Generate(RF_Type::Float32* Vertices,
                           RF_Type::Float32* Colors,
                           RF_Type::Size VertexCount,
                           RF_Type::Size ElementsPerVertex)
{
  glGenBuffers(2, m_VBOs);
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
  glBufferData(RF_GL::GL_ARRAY_BUFFER,
               VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
               Vertices, RF_GL::GL_STATIC_DRAW);

  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[1]);
  glBufferData(RF_GL::GL_ARRAY_BUFFER,
               VertexCount * sizeof(RF_Type::Float32) * 4, Colors,
               RF_GL::GL_STATIC_DRAW);

  glGenVertexArrays(1, &m_VAO);
  glBindVertexArray(m_VAO);
  m_VertexCount = VertexCount;
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
  glVertexAttribPointer(0, ElementsPerVertex, RF_GL::GL_FLOAT, RF_GL::GL_FALSE,
                        0, NULL);
  glEnableVertexAttribArray(0);

  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[1]);
  glVertexAttribPointer(1, 4, RF_GL::GL_FLOAT, RF_GL::GL_FALSE, 0, NULL);
  glEnableVertexAttribArray(1);

  glBindVertexArray(0);
  glBindBuffer(RF_GL::GL_ARRAY_BUFFER, 0);
}

void OpenGLModel::Bind()
{
  if(m_VertexCount > 0)
  {
    glBindVertexArray(m_VAO);
  }
}

void OpenGLModel::Unbind()
{
  if(m_VertexCount > 0)
  {
    glBindVertexArray(0);
  }
}

void OpenGLModel::Draw()
{
  if(m_VertexCount > 0)
  {
    glDrawArrays(RF_GL::GL_TRIANGLES, 0, m_VertexCount);
  }
}

void OpenGLModel::Update(RF_Type::Float32* Vertices,
                         RF_Type::Size VertexCount,
                         RF_Type::Size ElementsPerVertex)
{
  if(VertexCount > 0)
  {
    m_VertexCount = VertexCount;
    glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
    glBufferData(RF_GL::GL_ARRAY_BUFFER,
                 VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
                 nullptr, RF_GL::GL_STREAM_DRAW);
    glBufferSubData(RF_GL::GL_ARRAY_BUFFER, 0,
                    VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
                    Vertices);
  }
  else
  {
    m_VertexCount = 0;
  }
}

void OpenGLModel::Update(RF_Type::Float32* Vertices,
                         RF_Type::Float32* Colors,
                         RF_Type::Size VertexCount,
                         RF_Type::Size ElementsPerVertex)
{
  if(VertexCount > 0)
  {
    m_VertexCount = VertexCount;
    glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[0]);
    glBufferData(RF_GL::GL_ARRAY_BUFFER,
                 VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
                 nullptr, RF_GL::GL_STREAM_DRAW);
    glBufferSubData(RF_GL::GL_ARRAY_BUFFER, 0,
                    VertexCount * sizeof(RF_Type::Float32) * ElementsPerVertex,
                    Vertices);

    glBindBuffer(RF_GL::GL_ARRAY_BUFFER, m_VBOs[1]);
    glBufferData(RF_GL::GL_ARRAY_BUFFER,
                 VertexCount * sizeof(RF_Type::Float32) * 4, nullptr,
                 RF_GL::GL_STREAM_DRAW);
    glBufferSubData(RF_GL::GL_ARRAY_BUFFER, 0,
                    VertexCount * sizeof(RF_Type::Float32) * 4, Colors);
  }
  else
  {
    m_VertexCount = 0;
  }
}

}  // namespace RadonFramework::Drawing