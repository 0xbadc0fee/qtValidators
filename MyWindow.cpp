


#include "MyWindow.h"
#include <QFormLayout>
#include <QComboBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include "J1939Validator.h"

//#include <QMenuBar>

//! [0]
MyWindow::MyWindow(QWidget* parent)
    : QDialog(parent)
{
    setWindowTitle("MyWindow");
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QGroupBox *pgnGroup = new QGroupBox(tr("GroupBox PGN"));
    QLabel *pgnGroupL = new QLabel(tr("PGN Label"));
    QDialogButtonBox *buttonBox = new QDialogButtonBox;
    QGroupBox *formGroupBox = new QGroupBox(tr("GroupBox Form"));
    QFormLayout *formLayout = new QFormLayout;
//! [0]

//! [1]
    QLabel *pgnNameL = new QLabel(tr("Name"));
    QLineEdit *pgnName = new QLineEdit;
    pgnName->setValidator(pgnValidForm->pgnValidName);

    QLabel *pgnNumberL = new QLabel(tr("Number"));
    QLineEdit *pgnNumber = new QLineEdit;
    pgnNumber->setValidator(pgnValidForm->pgnValidNumber);

    QLabel *pgnTXMethodL = new QLabel(tr("TX Method"));
    QComboBox *pgnTXMethod = new QComboBox;
    pgnTXMethod->addItems(QStringList()<<"Cyclic"<<"OnEvent"<<"OnChange");

    QLabel *pgnTXRateL = new QLabel(tr("TX Rate"));
    QLineEdit *pgnTXRate = new QLineEdit;
    pgnTXRate->setValidator(pgnValidForm->pgnValidTxRate);

    QLabel *pgnDLCL = new QLabel(tr("DLC"));
    QComboBox *pgnDLC = new QComboBox;
    pgnDLC->addItems(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7");

    QLabel *pgnPriorityL = new QLabel(tr("Priority"));
    QComboBox *pgnPriority = new QComboBox;
    pgnPriority->addItems(QStringList()<<"7"<<"6"<<"5"<<"4"<<"3"<<"2"<<"1");


    formLayout->addRow(pgnNameL);
    formLayout->addRow(pgnName);
    formLayout->addRow(pgnNumberL);
    formLayout->addRow(pgnNumber);
    formLayout->addRow(pgnTXMethodL);
    formLayout->addRow(pgnTXMethod);
    formLayout->addRow(pgnTXRateL);
    formLayout->addRow(pgnTXRate);
    formLayout->addRow(pgnDLCL);
    formLayout->addRow(pgnDLC);
    formLayout->addRow(pgnPriorityL);
    formLayout->addRow(pgnPriority);

    formGroupBox->setLayout(formLayout);
//! [1]

//! [1.5]
      // TODO pass validators BOOL check ??
//! [1.5]

//! [2]
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                     | QDialogButtonBox::Cancel);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
//! [2]

//! [3]
    QGridLayout *pgnLayout = new QGridLayout;
    pgnLayout->addWidget(pgnGroupL, 0, 0);
    pgnLayout->addWidget(formGroupBox, 1, 0);
    pgnLayout->addWidget(buttonBox, 2,0);
    pgnGroup->setLayout(pgnLayout);
//! [3]

//! [4]
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(pgnGroup, 0, 0);

    setLayout(layout);
//! [4]

}
