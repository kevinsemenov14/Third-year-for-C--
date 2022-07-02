/*
 * rectangle.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "rectangle.h"

rectangle::rectangle()
{
	length =  0;
	width  =  0;
	perimeter = 0;
	area = 0;
}

rectangle::rectangle(double newLength,double newWidth)
{
	length = newLength;
	width = newWidth;
	perimeter = 0;
	area = 0;
}

rectangle::~rectangle()
{

}
double rectangle::calcArea()
{
	return area = length * width;

}
double rectangle::calcPerimeter()
{
	return perimeter= length +length + width + width;

}

