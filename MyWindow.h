#ifndef MYWINDOW_H
#include <QtWidgets/QDialog>
#include <QtWidgets/QApplication>

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

#define MYWINDOW_H

class MyWindow : public QDialog {

Q_OBJECT

public:
    MyWindow(QWidget* parent = nullptr);

private:
    //QGroupBox *formGroupBox;

    QLineEdit *pgnLineEdit1;
    QLineEdit *pgnLineEdit2;
    QLineEdit *pgnLineEdit3;
    QLineEdit *pgnLineEdit4;


};

// MyWindow::MyWindow(QWidget* parent)
//     : QDialog(parent)
// {
//     setWindowTitle("MyWindow");

//     // Make widgets, etc...
// }

#endif // MYWINDOW_H
