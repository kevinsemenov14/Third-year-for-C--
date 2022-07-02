/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "Student.h"
#include "mathStudent.h"
#ifndef SC1CSTUDENT_H_
#define SC1CSTUDENT_H_
// drived from student
class cs1c : public Student
{


public:
	 int age;
			 friend istream& operator >> (istream& input, cs1c& inputcsStudent);
			 friend ostream& operator << (ostream& output, cs1c& outputcsStudent);

			  friend bool operator==(const cs1c& obj , const cs1c& obj2); // criteria 11

			  friend bool checkage (const cs1c& obj , const mathStudent& obj2);  // criteria 1
			  friend int operator+(cs1c obj4 , int nums);  // criteria 9

	cs1c();
	cs1c(string name ,string score, string python, int newmonth , int newday, int newyear, int age);
	string getScore() const;
	string getPython() const;

	void printStudent();
	void chageAge (cs1c obj1,int num);
	void setScore(string score);
	void setPython(string python);
	void setAge(int newage);

private:


	string score;
	string python;
	Date newdate;


};



#endif /* SC1CSTUDENT_H_ */
