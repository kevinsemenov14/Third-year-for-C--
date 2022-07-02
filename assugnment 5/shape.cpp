/*
 * shape.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "shape.h"

shape::shape()
{

}
shape::~shape()
{

}

void printArea(shape& obj)
{
cout << obj.calcArea();
}
void printPerimeter(shape& obj)
{
 cout << obj.calcPerimeter();
}
