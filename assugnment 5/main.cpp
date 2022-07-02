#include "shape.h"
#include "triangle.h"
#include "rectangle.h"

int main(int argc, char *argv[ ] )
{




	double newLength = 0;
	double newWidth = 0;
	double sideOne   = 0;
	double sideTwo   = 0;
	double sideThree = 0;



cout << "Enter the rectangle length ";
cin >> newLength;
cout << "Enter the rectangle Width ";
cin >> newWidth;
rectangle myrectangle(newLength,newWidth);
cout << "Enter the first side of the triangle";
cin >> sideOne;
cout << "Enter the second side of the triangle ";
cin >> sideTwo;
cout << "Enter the third side of the triangle ";
cin >> sideThree;
triangle mytriangle( sideOne,sideTwo,sideThree);
	cout << endl;
cout << "the area of the rectangle is ";
printArea(myrectangle);
cout << endl;
cout << "the perimeter of the rectangle is ";
printPerimeter(myrectangle);
cout << endl;
cout << "the area of the triangle is ";
printArea(mytriangle);
cout << endl;
cout << "the perimeter of the triangle is ";
printPerimeter(mytriangle);


	cout << endl << endl;
	cout << "outputing full name" << endl;
	for(int i = 0; i < argc; i++){

		cout << argv[i] << endl;
	}
	cout << endl;
	cout  << "Third letter of first name "<< argv[1][2];
	cout << endl;
	cout <<"third letter of the second word " << argv[2][2];


	return 0;
}
