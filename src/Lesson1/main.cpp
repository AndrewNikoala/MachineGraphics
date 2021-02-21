//
//#include <QApplication>
//#include <QSurfaceFormat>
//
//#include "Lesson1/OldProject/TriangleWindow.hpp"
//#include "Lesson1/MainWindow.h"
//
//int main(int argc, char **argv) {
//  QGuiApplication app(argc, argv);
//
//  QSurfaceFormat format;
//  format.setSamples(16);
//  format.setVersion(2, 1);
//
//  fgl::TriangleWindow window;
//  //fgl::MainWindow window;
//  window.setFormat(format);
//  window.resize(640, 480);
//  window.show();
//
//  window.setAnimated(true);
//
//  return app.exec();
//}


#include <QApplication>
#include <QLabel>
#include <QSurfaceFormat>

#ifndef QT_NO_OPENGL
#include "MainWindow.h"
#endif

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    app.setApplicationName("cube");
    app.setApplicationVersion("0.1");
#ifndef QT_NO_OPENGL
    MainWindow widget;
    widget.show();
#else
    QLabel note("OpenGL Support required");
    note.show();
#endif
    return app.exec();
}

