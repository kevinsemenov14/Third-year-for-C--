/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "Date.h"
#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include <iostream>
#include <iomanip>

#include <string>
using namespace std;

class Student{



public:
	 int age;
	string name;
	/*
	 * constructer
	 */
	Student();
	/*
		 * none defulet constructer
		 */
	Student(string name, unsigned int id,
			string PhoneNumber,
			unsigned int age,string standing,
		float GPA, string gender);
// sets the students info



	void SetStudent(string name, unsigned int id,
			string PhoneNumber,
			unsigned int age,string standing,
		float GPA, string gender);

	// retruns name
	string GetName() const;
// returns gender
	string Getgender() const;
//returns id
	unsigned int GetId() const;
// returns phonenumber
	string GetPhoneNumber() const;
// returns age
	unsigned int GetAge() const;
//returns class standing
	string GetStanding() const;
// returns students gpa
	float GetGPA() const;
// prints students info
	 void printStudent();
// sets a new name for student
	void setName(string name);
// sets a new id for student
	 void setId(unsigned int id);
// sets a new number for student
	 void setPhoneNumber(string PhoneNumber);
// sets a new age for student
	 void setAge( int age);

	 void setStanding(string standing);

	 void setGPA(float GPA);


	 void setGender(string gender);

private:



string gender;

unsigned int id;
string PhoneNumber;

string standing;
float GPA;
};
class invladeAge{};
	 class invladeGPA{};


#endif /* STUDENT_H_ */
