#include <QtWidgets/QDialog>
#include <QtWidgets/QApplication>
#include "MyWindow.h"
#include <QApplication>

#include "MyWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    auto win = new MyWindow;
    win->show();

    return app.exec();
}
