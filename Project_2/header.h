#ifndef HEADER_H
#define HEADER_H

#include "mainwindow.h"

#include <iostream>

using namespace std;

class Customer;

enum IntrestLevel{
    DEFAULT,
    NOT_INTRESTED,
    SOMEWHAT_INTRESTED,
    VERY_INTRESTED
};

void PopulateList(QVector<Customer> *customerList);



#endif // HEADER_H
