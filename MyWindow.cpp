


#include "MyWindow.h"
#include <QFormLayout>
#include <QComboBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
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
    QComboBox *txMethodCombo = new QComboBox;
    txMethodCombo->addItems(QStringList()<<"Cyclic"<<"OnEvent"<<"OnChange");
    QComboBox *dlc = new QComboBox;
    dlc->addItems(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7");
    QComboBox *priority = new QComboBox;
    priority->addItems(QStringList()<<"7"<<"6"<<"5"<<"4"<<"3"<<"2"<<"1");

    formLayout->addRow(new QLabel(tr("Name:")), new QLineEdit);
    formLayout->addRow(new QLabel(tr("Number:")), new QLineEdit);
    formLayout->addRow(new QLabel(tr("TX Method")), txMethodCombo);
    formLayout->addRow(new QLabel(tr("TX Rate:")), new QLineEdit);
    formLayout->addRow(new QLabel(tr("DLC:")), dlc);
    formLayout->addRow(new QLabel(tr("Data Page:")), new QLineEdit);
    formLayout->addRow(new QLabel(tr("Ext Data Page:")), new QLineEdit);
    formLayout->addRow(new QLabel(tr("Priority:")), priority);

    formGroupBox->setLayout(formLayout);
//! [1]

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
