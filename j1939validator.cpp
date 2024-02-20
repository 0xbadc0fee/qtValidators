#include "J1939Validator.h"
#include <QValidator>


J1939Validator::J1939Validator()
{

    //QValidator *validPGNName = new QRegularExpressionValidator(rx, this);


}

int J1939Validator::pgnValidForm() {
    return 0;
}

int J1939Validator::spnValidForm(){
    return 0;
}

