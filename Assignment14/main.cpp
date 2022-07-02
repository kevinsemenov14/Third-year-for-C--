/*
 * main.cpp

 *
 *  Created on: Dec 5, 2016
 *      Author: ksemenov0
 */
#include "linkedlist.h"
int main()
{

	linklist<int> intlist;

	linklist<int> intlist2;
	linklist<double> doublelist;
	linklist<double> doublelist2;

	intlist.addfront(88);
	intlist.addfront(78);
	intlist.addfront(62);
	intlist.addfront(123);
	intlist.addfront(60);
	intlist.print();
	cout << " first list" << endl;


	intlist2.addfront(88);
	intlist2.addfront(78);
	intlist2.addfront(62);
	intlist2.addfront(123);
	intlist2.addfront(60);

	intlist2.reverse();
	intlist2.print();
	cout << " second list reversed" << endl;

	intlist.deletethirdmember();
	intlist2.deletethirdmember();

	intlist.print();
	cout << "deleted third item" << endl;
	intlist2.print();
	cout << "deleted third item" << endl;

	intlist.addmiddle(70);
	intlist2.addmiddle(70);

	intlist.print();
	cout << "added to the middle" << endl;
	intlist2.print();
	cout << "added to the middle" << endl;


	cout << endl << " part two useing doubles" << endl;

	doublelist.addfront(88.1);
	doublelist.addfront(78.1);
	doublelist.addfront(62.1);
	doublelist.addfront(123.1);
	doublelist.addfront(60.1);
	doublelist.print();
	cout << " first list" << endl;


	doublelist2.addfront(88.1);
	doublelist2.addfront(78.1);
	doublelist2.addfront(62.1);
	doublelist2.addfront(123.1);
	doublelist2.addfront(60.1);

	doublelist2.reverse();
	doublelist2.print();
	cout << " second list reversed" << endl;

	doublelist.deletethirdmember();
	doublelist2.deletethirdmember();

	doublelist.print();
	cout << "deleted third item" << endl;
	doublelist2.print();
	cout << "deleted third item" << endl;

	doublelist.addmiddle(70);
	doublelist2.addmiddle(70);

	doublelist.print();
	cout << "added to the middle" << endl;
	doublelist2.print();
	cout << "added to the middle" << endl;

	return 0;
}


