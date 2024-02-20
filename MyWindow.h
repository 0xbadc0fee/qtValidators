#ifndef MYWINDOW_H
#include <QtWidgets/QDialog>
#include <QtWidgets/QApplication>
#include "j1939validator.h"

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

#define MYWINDOW_H

class MyWindow : public QDialog {

Q_OBJECT

public:
    MyWindow(QWidget* parent = nullptr);


private:
    J1939Validator * pgnValidForm = new J1939Validator;


};

// MyWindow::MyWindow(QWidget* parent)
//     : QDialog(parent)
// {
//     setWindowTitle("MyWindow");

//     // Make widgets, etc...
// }

#endif // MYWINDOW_H
