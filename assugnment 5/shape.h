/*
 * shape.h
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
using namespace std;




class shape{

public:

	shape();
	virtual ~shape();

	virtual double calcPerimeter()= 0;
	virtual double calcArea() = 0;
	 friend void printArea(shape& obj);
	friend void printPerimeter(shape& obj);

private:



};


#endif /* SHAPE_H_ */
