/*
 * triangle.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "triangle.h"


triangle::triangle()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
	area = 0;
	perimeter = 0;
}
triangle::triangle(double sideOne, double sideTwo, double sideThree)
{
	side1 = sideOne;
	side2 = sideTwo;
	side3 = sideThree;
	area = 0;
	perimeter = 0;

}
triangle::~triangle()
{

}
double triangle::calcPerimeter()
{
return perimeter = side1 + side2 + side3;
}
double triangle::calcArea()
{
	double p = 0;
		 p = (side1 + side2 + side3)/2;

	area = (p-side1)*(p-side2)*(p-side3);
area = area *p;
 return area = sqrt(area);


}

