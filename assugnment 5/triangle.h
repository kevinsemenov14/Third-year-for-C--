/*
 * triangle.h
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "shape.h"
#ifndef TRIANGLE_H_
#define TRIANGLE_H_



class triangle : public shape{

public:
	triangle();
	triangle(double sideOne, double sideTwo, double sideThree);
	virtual	~triangle();

	virtual double calcPerimeter();
	virtual double calcArea();



private:
	double side1;
	double side2;
	double side3;
	double area;
	double perimeter;

};

#endif /* TRIANGLE_H_ */
