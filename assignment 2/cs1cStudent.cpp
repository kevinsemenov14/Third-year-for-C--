/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "sc1cStudent.h"
cs1c::cs1c(){

}
cs1c::cs1c(string newname ,string newscore, string newpython , int newmonth , int newday, int newyear, int newage){
	int month;
	int day;
	int year;

setName(newname);
 age = newage;
	python= newpython;
	 score = newscore;
	 month = newmonth;
	   day = newday;
      year = newyear;
// sets the date for the date class
	 newdate.SetDate( month,day, year);
}
 istream& operator >> (istream& input, cs1c& inputcsStudent)  // cin operator
{
cout << "Enter Name ";
getline(input, inputcsStudent.name);
return input;
}
 ostream& operator << (ostream& output, cs1c& outputcsStudent)
 {
	 Date newdate;
	 output <<  left << setw(16) << outputcsStudent.GetName() << setw(20)
	 		 << outputcsStudent.getScore() << setw(20) << outputcsStudent.getPython() << newdate.GetMonth()
	 		 << "/" << newdate.GetDay()<< "/"<< newdate.GetYear() << endl;
	 return output;
 }
 // criteria 11
  bool operator==(const cs1c& obj , const cs1c& obj2)
		{
	  bool valid;
if(obj.age == obj2.age)
{
	return valid;
}
		}


	void cs1c:: setScore(string Newscore){
		score = Newscore;
	}
	// criteria 9
	int operator+(cs1c obj4 , int nums)
	{
  return obj4.age + nums;
	}
	// criteria
	void cs1c::chageAge (cs1c obj1,int num)
	{

		obj1.setAge(num + obj1.GetAge());
	}
	void  cs1c::setPython(string Newpython){
		python = Newpython;
	}
	void cs1c::setAge(int newage)
	{
		if( newage < 5)
		{
			throw invladeAge();
		}
		else
		{
		age = newage;
		}
	}

	string cs1c::getScore() const{
		return score;
	}

	string cs1c::getPython() const{
		return python;
	}
	 bool checkage (const cs1c& obj , const mathStudent& obj2)
	{
		bool valid;
		if(obj.age == obj2.age)
		{
			return valid;
		}
	}
	void cs1c::printStudent(){
// uses the get methods and prints out the info on cs1c students
 cout <<  left << setw(16) << GetName() << setw(20)
		 << getScore() << setw(20) << getPython() << newdate.GetMonth()
		 << "/" << newdate.GetDay()<< "/"<< newdate.GetYear() << endl;
	}
