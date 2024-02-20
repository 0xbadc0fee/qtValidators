#ifndef J1939VALIDATOR_H
#define J1939VALIDATOR_H
#include <QIntValidator>
#include <QValidator>
#include <QRegularExpressionValidator>
#include <QRegularExpression>


using namespace std;


class J1939Validator: public QObject
{
    Q_OBJECT
private:


public:
    QValidator *pgnValidName = new QRegularExpressionValidator(QRegularExpression("badc0fee"));
    QIntValidator *pgnValidNumber = new QIntValidator(0,65279,this);
    QIntValidator *pgnValidByte = new QIntValidator(0,7,this);
    QIntValidator *pgnValidTxRate = new QIntValidator(5,9999,this);
    QIntValidator *pgnValidDataPage = new QIntValidator(0,1,this);
    QIntValidator *pgnValidExtDataPage = new QIntValidator(0,1,this);

    QIntValidator *spnValidScaleFactor = new QIntValidator(-9999,9999,this);
    QIntValidator *spnValidOffset = new QIntValidator(-9999,9999,this);


    int pgnValidForm();
    int spnValidForm();
    bool validInput = false;

    J1939Validator();
};

#endif // J1939VALIDATOR_H
