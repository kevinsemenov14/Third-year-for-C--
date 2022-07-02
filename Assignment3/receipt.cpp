#include "receipt.h"


receipt::receipt(){

	head = NULL;
	tail = NULL;

}
void receipt::addToList(){
	items *pointer; // makes a new pointer
	pointer = new items;

	if(head == NULL){

// outputs date and asks for input from the user using pointers if the list is empty
		cout << "Enter item name" << endl;
		getline(cin, pointer->stuff);
		cout << endl << "Enter item cost" << endl;
		cin >> pointer->cost;
		cin.ignore();
		cout << endl << "Enter item quantity" << endl;
		cin >> pointer->quantity;
		cin.ignore();
		pointer->next = NULL;
		head = pointer;
		tail = pointer;

	}
	else
	{
		// outputs date and asks for input from the user using a ponter
		tail->next = pointer;
		tail = pointer;
		tail->next= NULL;

		cout << "Enter item name" << endl;
		getline(cin, tail->stuff);
		cout << endl << "Enter item cost" << endl;
		cin >> tail->cost;
		cin.ignore();
		cout << endl << "Enter item quantity" << endl;
		cin >> tail->quantity;
		cin.ignore();





	}
	pointer= NULL;

}

void receipt::printList()
{
	items *pnt;
	pnt = head; // makes a new pointer pointing to the front of the list then prints out all the date

	if(head != NULL){
		cout << left << setw(20) << "Name of equipment " << setw(10) << "Cost " << setw(15) << "Quantity ";
		cout << endl;
		while(pnt->next != NULL){

			cout << left << setw(20) << pnt->stuff << setw(10) << pnt->cost << setw(15) <<pnt->quantity;
cout << endl;
			pnt = pnt->next;

			if(pnt->next == NULL){

				cout << left << setw(20) << pnt->stuff << setw(10) << pnt->cost << setw(15) <<pnt->quantity;
			}
		}
	}
	else
	{
		cout << "The list is empty";
	}

}
void receipt::printTaxList(){
	items *pnt1; // makes a pionter point to the front
	pnt1 = head;

	float total = 0;
	float tax = 0.825; // tax

	while(pnt1->next != NULL){ // checks untill the list ends

		total = total + pnt1->cost;
		total = total * pnt1->quantity;
		pnt1 = pnt1->next;

		if(pnt1->next == NULL){
			total = total + pnt1->cost;
			total = total * pnt1->quantity;
		}


	}
	cout << endl;
	cout << "Your total without tax is " << total;
	tax = total*tax;
	tax = total - tax;
	total = tax + total;
	cout << endl << "total with tax is " << total;
}
