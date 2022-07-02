/*
 * linkedlist.h
 *
 *  Created on: Dec 5, 2016
 *      Author: ksemenov0
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;





template <class Type>
class linklist
{
public:
	struct list
	{
		Type item;
		list *next;
		list * perv;
	};


	linklist();
	~linklist();

	bool isempty()const;
	int getsize();
	void addfront(const Type &);
	void addmiddle(const Type &);
	void deletethirdmember();
	void print();
	void reverse();

private:
	list *tail;
	list *head;
	int count;

};
template <typename Type>
void linklist<Type>::print()
{
	list * ptr;
	ptr = head;
	if(isempty()!= 0)
	{
		cout << "the list is empty";
	}

	while(ptr != NULL)
	{
		cout << ptr->item << " ";
		ptr = ptr->next;
	}
}

template <typename Type>
linklist<Type>::linklist()
{

	tail = NULL;
	head = NULL;
	count = 0;
}
template <typename Type>
void linklist<Type>::deletethirdmember()
{
	list* pointer;
	list* pointer1;
	pointer1 = head;
	pointer = head;
	for(int i= 1; i <3; i++)
	{
		pointer1 = pointer1->next;
	}
	for(int i= 1; i <2; i++)
	{
		pointer = pointer->next;
	}

pointer->next = pointer1->next;

pointer = pointer1->next;

pointer->perv = pointer1->perv;
count--;
delete pointer1;
}
template <typename Type>
linklist<Type>::~linklist()
{
delete head;
delete tail;
}
template <typename Type>
bool linklist<Type>::isempty()const
{
	return count == 0;
}
template <typename Type>
int  linklist<Type>::getsize()
{
	return count;
}
template <typename Type>
void linklist<Type>::reverse()
{

list * temp;
temp = tail;

int index = 0;
Type arry[count];
while(temp != NULL)
{

	arry[index] = temp->item;
	index++;
	temp = temp->perv;

}

temp = head;
for(int i = 0; i < count;i++)
{
	temp->item = arry[i];
	temp = temp->next;
}

}
template <typename Type>
void  linklist<Type>::addfront(const Type &typeData)
{
	list * add   = new list;
	add->item =   typeData;

	if(isempty()!= 0)
	{
		add->next =   NULL;
		add->perv =   NULL;
		head = add;
		tail = add;
	}
	else
	{
		tail->next = add;
			add->perv = tail;
			tail = add;
			tail->next = NULL;

	}

	count++;
}
template <typename Type>
void linklist<Type>::addmiddle(const Type &typeData)
{
	int middle = 0;
	list *pointer;
	pointer = head;


	for(int i = 0; i <= middle; i++)
	{

		pointer = pointer->next;

	}
	list * add = new list;
	add->item = typeData;
	add->next = pointer->next;
	pointer->next = add;
	count++;

}
#endif /* LINKEDLIST_H_ */
