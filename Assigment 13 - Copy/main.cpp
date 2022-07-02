#include <iomanip>
#include <iostream>
#include <string.h>
#include <ctime>
#include <cmath>
#include <climits>
#include <stdio.h>
#include <sstream>
double cube(double number);
double cuberoot(double number);
void ConvertToBinary(int n);
using namespace std;


int main()
{
	time_t time1;
	time_t time2;
	char *currentDate;
	double days, days2 , day;

	time1 = time(( time_t * ) 0 );
	time2 = time(( time_t * ) 0 );

	currentDate = ctime( &time1 );
	cout << "Current date is " <<  currentDate;
	cout << endl;


	days =  86400 * 88;
	time1 =  time1 + days;

	currentDate = ctime( &time1 );
	cout << "88 days from today is " << currentDate;
	cout << endl;

	// finding two dates
	//dec 24 -> jul 25

	days =  86400 * 150;
	time1 =  time1 + days;


	days2 = 86400 * 388;
	time2 = time2 + days2;


	day = difftime(time2 ,time1 );

	day = day / 86400 ;

	cout << "There are " << day << " days between " << ctime (&time2);
	cout << " and " << ctime (&time1) << endl;
	cout << endl;
	// part 2
	cout << endl;
	cout << "Part 2\n";


	double x= 0;
	double y = 0;
	errno = 0;
	x = -2;
	y = sqrt( x );
	cout << "sqrt error number is " << strerror(errno) << endl;
	cout <<  "sqrt of " << x  << " is " << y << endl;
	cout << endl;
	errno = 0;
	y = 1;
	x = 0;
	y = y/x;

	cout << "error message when division by zero " << strerror(errno) << endl;
	cout <<  "divid by zero x is " << x  << " and y  is 1 error is " << y << endl << endl;

	errno = 0;
	x = -2;
	y =  log(x);
	cout << "log error number is " << strerror(errno) << endl;
	cout <<  "log of " << x  << " is " << y << endl << endl;

	errno = 0;
	 cout <<  "pow(1,19) + 4 -  pow(1,19) is " << pow(1,19) + 4 -  pow(1,19);

cout << endl;





	double (*pointer)(double );
	pointer = &cube;
	cout << "The cube of 5 is " << pointer(5);
	cout << endl;

	pointer = *cuberoot;
	cout << "The cuberoot of 27 is " << pointer(27);
cout << endl << endl;

char letter = 'A';


while(letter <=  'Z')
{
 cout << " the binary of " << letter << " is ";
	ConvertToBinary(((int)(letter)));
	cout << endl;

	letter++;
}
int n = 97;

while(n <  122)
{
	cout << " the binary of " << (char)n << " is ";
	ConvertToBinary(n);
	cout << endl;

	n++;
}
 n = 48;

while(n <  58)
{
	cout << " the binary of " << (char)n << " is ";
	 ConvertToBinary(n);

	cout << endl;

	n++;
}



	return 0;
}

void ConvertToBinary(int n)
{
	stringstream ss;
	string num;

    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }

    n %= 2;


    ss << n;
   getline(ss, num);
   cout << num;
return ;


}
double cube(double number)
{

	return pow(number,3);
}
double cuberoot(double number)
{
	return cbrt(number);

}

