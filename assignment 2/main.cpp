/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "sc1cStudent.h"
#include "Date.h"
#include "Student.h"
#include "mathStudent.h"
#include <cassert>
int main()
{

	/*
	 * this program will make a list of students showing outputing there name id number age gpa and gender
	 * then will change the info and reprints there new info
	 * also it will display the studnets of the class cs1c and will change there info and reprint
	 */
	Student newstudent[5];
	//mathStudent math[5];
	//cs1c cs1cstudent[5];

	// uses the non defult constructer for 5 students
	newstudent[0] = Student {"kevin", 668888 , "(949)-55-1234", 23 , "firstyear" , 3.4 , "M"};
	//newstudent[1] = Student {"Mary Algebra", 4253 , "(949)565-3653", 23 , "Secondyear" , 3.5 , "F"};
	//newstudent[2] = Student {"timmy turnner", 6553 , "(949)5345-356", 23 , "thirdyear" , 4.3 , "F"};
	// newstudent[3] = Student {"jackie popcorn", 4753 , "(929)564-343", 23 , "firstyear" , 2.8 , "M"};
	//newstudent[4] = Student {"unholy paper", 42353 , "(949)565-3542", 23 , "forthyear" , 1.1 , "F"};
	int age = 0;
	float gpa = 0.0;
	char answer;

do{
	try {
		cout << "Enter new age for student ";

				cin >> age;
				cout << endl;

		newstudent[0].setAge(age);

	} catch (invladeAge exc)
	{

		cout << "Please enter an age greater then 5 your age was " << age;
		cout << endl;
	}
}while(age < 5);



newstudent[0].printStudent();
cout << endl;
do{
	try {
		cout << "Enter new GPA for student ";

		cin >> gpa;
		cout << endl;

		newstudent[0].setGPA(gpa);
	} catch (invladeGPA exc)
	{

		cout << "Please enter a GPA greater then 0 your gpa was " << gpa;
		cout << endl;
	}
}
	while(gpa <= 0.0);
	newstudent[0].printStudent();
	cout << endl;
	cout << " Do you want to crash your program Y or N" << endl;
	cin >> answer;
	answer = toupper(answer);
	if(answer == 'Y')
	{
		assert( answer != 'Y');
	}

	//	cout << "Students" << endl;
	//	cout << left << setw(16) <<"Name" << setw(20)  << "Student’s Id" << setw(18) << "Phone"	<< setw(10) <<"Age" <<
	//			setw(10) <<	"Gender"<< setw(20) <<	"Class standing"<< setw(10)<<	"GPA";

	// prints out the info of the five students
	//	newstudent[0].printStudent();
	//	newstudent[1].printStudent();
	//cout << endl;

	//math[1] = mathStudent { "Mary Algebra","3333 Marguerite","Mission Viejo","CA",92724 };
	//
	//mathStudent maths = math[0];
	//
	//cout << "MathStudents" << endl;
	//cout << left << setw(16) <<"Name" << setw(20)  << "Address" << setw(18) << "City"	<< setw(10) <<"State" <<
	//			setw(10) <<	"Zip" << endl;
	//	math[0].print();
	//	cout << endl;
	//	math[1].print();
	//
	//math[0] = mathStudent { "kevin","1234 Main","Laguna Niguel","CA",92724, 10 };
	//cs1cstudent[1] = cs1c { "john pop","423", "yes", 4, 23 , 200,10};
	//cs1cstudent[0] = cs1c { "Joe Calculus","244", "No", 8, 3 , 1996,10};




	//	newstudent[2].printStudent();
	//newstudent[3].printStudent();
	//newstudent[4].printStudent();
	//cout << endl;
	// criteria 2
	//cout << "test one checks to see if the age of cs1cstudent obj age equals age of a math student" << endl;
	//
	//if (checkage(cs1cstudent[0],math[0]))
	//{
	//	 cout << "age does not equal" << endl;
	// }
	// else
	// {
	//	 cout << "age equals" << endl;
	//
	// }
	//cout << "when mathstudents changes age" << endl;
	//// criteria 2
	//cs1cstudent[0].setAge(11);
	// criteria 3
	//if (checkage(cs1cstudent[0],math[0]))
	//{
	//	 cout << "age does not equal" << endl;
	// }
	// else
	// {
	//	 cout << "age equals" << endl;
	//
	// }
	//cs1cstudent[0].setAge(10);
	// criteria 5
	//cout << "Test two checks if cs1cstudent age equals cs1cstudent age" << endl;
	//
	// if (cs1cstudent[0] == cs1cstudent[1])
	// {
	//	 cout << "age does not equal" << endl;
	// }
	// else
	// {
	//	 cout << "age equals" << endl;
	//
	// }
	// // criteria 6
	// cs1cstudent[0].setAge(11);
	// cout <<"checking age when changed" << endl;
	// if (cs1cstudent[0] == cs1cstudent[1])
	// {
	//	 cout << "age does not equal" << endl;
	// }
	// else
	// {
	//	 cout << "age equals" << endl;
	//
	// }
	// cout << "test 3 changing age for cs1cstudent "<< endl;
	//
	//cs1cstudent[0].chageAge(cs1cstudent[0], 5);
	//// criteria 7
	//cout << "test 4 adding 5 to 11" << endl;
	//cout << cs1cstudent[0]+ 5;
	//cout << endl;
	////cs1cstudent[2] = cs1c { "timmy turnner","567", "No", 7, 23 , 1999};
	// cout << "test 5 overloading the cin and cout " << endl;
	//cin >> cs1cstudent[1];
	//cout << endl << "CS1CStudents";
	//cout << endl << left << setw(16) <<"Name" << setw(20) << 	"Assignment Score" << setw(20) <<"Python Knowledge"<< setw(20) << "Graduation Date" << endl;
	//// criteria
	//cout <<cs1cstudent[1];
	//cs1cstudent[0].printStudent();
	//cs1cstudent[1].printStudent();
	//cs1cstudent[2].printStudent();
	//cout << endl;




	//ostream& operator << (ostream& output, cs1c& outputDate)  // cout operator
	//{
	//output << outputDate.month << "/" << outputDate.day << "/"
	//	<< outputDate.year << endl;
	//return output;
	//}

	// re sets the students info
	/*
newstudent[0].setAge(13);
newstudent[0].setGPA(4.4);
newstudent[0].setGender("F");
newstudent[1].setAge(24);
newstudent[1].setGPA(2.4);
newstudent[1].setGender("M");
cs1cstudent[0].setPython("yes");
cs1cstudent[0].setScore("400");
cs1cstudent[1].setPython("No");
cs1cstudent[1].setScore("567");
cout << "Students" << endl;
// reprints the info
cout << left << setw(16) <<"Name" << setw(20)  << "Student’s Id" << setw(18) << "Phone"	<< setw(10) <<"Age" <<
		setw(10) <<	"Gender"<< setw(20) <<	"Class standing"<< setw(10)<<	"GPA" ;
newstudent[0].printStudent();
newstudent[1].printStudent();
cout << endl;
cout << endl<< "CS1CStudents";
cout << endl << left << setw(16) <<"Name" << setw(20) << 	"Assignment Score" << setw(20) <<"Python Knowledge"<< setw(20) << "Graduation Date" << endl;

cs1cstudent[0].printStudent();
cs1cstudent[1].printStudent();
	 */




	return 0;
}

