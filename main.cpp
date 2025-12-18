#include "ProjectTachyon.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ProjectTachyon window;
    window.show();
    return app.exec();
}
