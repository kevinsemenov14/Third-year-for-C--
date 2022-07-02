/*
 * mathStudent.h
 *
 *  Created on: Sep 27, 2016
 *      Author: ksemenov0
 */
#include "Student.h"
#ifndef MATHSTUDENT_H_
#define MATHSTUDENT_H_

class mathStudent : public Student{




public:
	 int age;
	mathStudent();
	mathStudent( string newname ,char *address,char *city,char *state,int zip , int age);
	mathStudent (const mathStudent& objectName); // copy constructor



	int  getZip()const;

	void setCity( char *newcity);
	// input of the new city
	void setState(char *newstate);
	// input of new state
	void setAddress(char *newAddress);
	// intput of the new address
	void setzip( int zip);
	// inputs the new zip
	char* getAddress()const;
	// returns address
	char* getState()const;
	//retruns the state
	char* getCity()const;
	// returns the city
	void deepcopy(const mathStudent& objectName);
	void print();

private:



		char *address;
		char *city;
		char *state;
		int zip;




};




#endif /* MATHSTUDENT_H_ */
