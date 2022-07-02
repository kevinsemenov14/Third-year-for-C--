#include "mathStudent.h"
// constructor
	mathStudent::mathStudent()
	{
		address = new char[100];
		city = new char[100];
		state = new char[100];
		zip = 0;
		age = 0;


	}
	// none defult constructor
	mathStudent::mathStudent( string newname ,char *newaddress, char *newcity, char *newstate, int newzip,  int newage)
	{
		name = newname;
		address = newaddress;
	    city = newcity;
		state = newstate;
		zip =  newzip;
		age = newage;
	}
	// copy constructor
	mathStudent::mathStudent (const mathStudent& objectName)
	{
cout  << "using copy constructor" << endl;
		deepcopy(objectName);



	}

void mathStudent::setAddress(char *newAddress)
{
	address = newAddress +1;
}

void mathStudent::setCity( char *newCity)
{
city = newCity + 1;
}

void mathStudent::setState(char *newState)
{
state = newState + 1;
}

void mathStudent::setzip(int newZip)
{
	 zip = newZip;
}

int mathStudent::getZip()const
{
	return zip;
}

char* mathStudent::getAddress()const{
	return address;

}
char* mathStudent::getState()const
{
	return state;
}
char* mathStudent::getCity()const
{
	return city;
}
// deep copy method
void mathStudent::deepcopy(const mathStudent& objectName)
{

	city = new char;
	char *city;

	state = new char;
		*state = *objectName.state;

		address = new char;
			*address = *objectName.address;

}

void mathStudent::print()
{



	//cout <<setw(16) << GetName()<< setw(20) <<getAddress() << setw(18) << getCity() << setw(10) << getState() << setw(10) << getZip();



}

