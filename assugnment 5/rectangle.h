/*
 * rectangle.h
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "shape.h"
#ifndef RECTANGLE_H_
#define RECTANGLE_H_


class rectangle : public shape{

public:

	rectangle();
	rectangle(double newLength,double newWidth);
	virtual ~rectangle();

	virtual double calcPerimeter();
	virtual double calcArea();

private:
	double length;
	double width;
	double perimeter;
	double area;

};


#endif /* RECTANGLE_H_ */
