/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "Student.h"

Student::Student(){

}

Student::Student(string NewName, unsigned int Newid,
				string NewPhoneNumber,
				unsigned int Newage,string Newstanding,
			float NewGPA, string Newgender){

	name = NewName;
	id = Newid;
	PhoneNumber = NewPhoneNumber;
	age = Newage;
	standing = Newstanding;
	GPA = NewGPA;
	gender = Newgender;
}


void Student::SetStudent(string NewName, unsigned int Newid,
		string NewPhoneNumber,
		unsigned int Newage,string Newstanding,
float NewGPA, string Newgender){


	name = NewName;
	id = Newid;
	PhoneNumber = NewPhoneNumber;
	age = Newage;
	standing = Newstanding;
	GPA = NewGPA;
	gender = Newgender;
}
string Student::Getgender() const{
	return gender;
}

void Student::setName(string NewName){
	name = NewName;
}

void Student::setId(unsigned int Newid){
	id = Newid;
}

void Student::setPhoneNumber(string NewPhoneNumber){
	PhoneNumber = NewPhoneNumber;
}

void Student::setAge( int Newage){
	if(Newage < 5)
		{

			throw invladeAge();
		}
	else
	{
	age =	Newage;
	}
}
void Student::setGPA(float  NewGPA){
	if(NewGPA <= 0.0)
			{
				throw invladeGPA();
			}
	else
	{
	GPA = NewGPA;
	}
}
void Student::setStanding(string Newstanding){
	standing = Newstanding;
}
string Student::GetName() const{

	return name;
}
void Student::setGender(string Newgender){
	gender = Newgender;
}
unsigned int Student:: GetId() const{
	return id;
}

string Student::GetPhoneNumber() const{
	return PhoneNumber;
}

unsigned int Student::GetAge() const{
return age;
}

string Student::GetStanding() const{
return standing;
}

float Student::GetGPA() const{
return GPA;
}
void Student::printStudent(){
cout << endl;
cout << left << setw(16) << GetName() << setw(20)  << GetId() << setw(18) << GetPhoneNumber()	<< setw(10) <<GetAge() <<
		setw(10) <<	Getgender()<< setw(20) << GetStanding()<< setw(10)<<GetGPA();

}
