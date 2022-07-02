/*
 * receipt.h
 *
 *  Created on: Sep 21, 2016
 *      Author: ksemenov0
 */

#ifndef RECEIPT_H_
#define RECEIPT_H_
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>




class receipt{


private:

	struct items{

	string stuff;
	unsigned int quantity;
	float cost;
	items * next;

	};
items *head;
items *tail;

public:
	receipt();



	void addToList();
	// input data
	void printList();
	// ptints out the list of names and prices
	void printTaxList();
// prints out the total tax




};





#endif /* RECEIPT_H_ */
