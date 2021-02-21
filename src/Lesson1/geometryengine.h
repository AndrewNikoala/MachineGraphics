//
// Created by andre on 21.02.2021.
//

#ifndef FIT_GL_GEOMETRYENGINE_H_H
#define FIT_GL_GEOMETRYENGINE_H_H

#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>

class GeometryEngine : protected QOpenGLFunctions
{
public:
    GeometryEngine();
    virtual ~GeometryEngine();

    void drawCubeGeometry(QOpenGLShaderProgram *program);

private:
    void initCubeGeometry();

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
};

#endif //FIT_GL_GEOMETRYENGINE_H_H
