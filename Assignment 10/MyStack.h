/*
 * MyStack.h
 *
 *  Created on: Nov 7, 2016
 *      Author: ksemenov0
 */

#ifndef MYSTACK_H_
#define MYSTACK_H_
#include <iostream>
#include <iomanip>
using namespace std;



template <class T>
class MyStack
{

private:
	int qsize;
	int count;
	struct personNode
	{
		T data;
		personNode *next;
	};
	personNode *head;
	personNode *tail;

public:
	MyStack();
	void IsFull();
	void IsEmpty();
	int Size();
	void DisplayStack();
	void IsFront();
	void enqueue ( const T & newitem);
	void dequeue();



};

template <class T>
MyStack<T>::MyStack()
{
	qsize = 10;
	head = NULL;
	tail = NULL;
	count = 0;
}

template <class T>
void MyStack<T>::IsFull()
{

 if( count > 10)
 {
	 cout << "The stack is full";
 }
 else
 {
	 cout << "The stack is not full";
 }

}

template <class T>
void MyStack<T>::IsEmpty()
{
  if (count == 0)
  {
	  cout << "The stack is empty";
  }
  else
  {
	  cout << "The stack is not empty";
  }
}

template <class T>
int MyStack<T>::Size()
{
	return count;
}

template <class T>
void MyStack<T>::DisplayStack()
{

	personNode *perPtr;
	perPtr = head;

if(count == 0)
{
	cout << "the stack is empty";
}
while(perPtr != NULL)
{
if(perPtr != NULL)
{
	cout << perPtr->data;
	cout << " ";
}
perPtr = perPtr->next;
}

}

template <class T>
void MyStack<T>::IsFront()
{
	if(head != NULL)
	{
cout << head->data << " is at the front";
	}
	else
	{
		cout << "the stack is empty";
	}
}
template <class T>
void MyStack<T>::enqueue ( const T & newitem)
{
	personNode *perPtr;
	perPtr = new personNode;
 if(count == 0)
 {

	 perPtr ->data = newitem;
	 perPtr->next = NULL;
	 head = perPtr;
	 tail = perPtr;
	 count++;

 }
 else
 {
	 perPtr ->data = newitem;
	 tail->next = perPtr;
	 tail = perPtr;
	 tail->next = NULL;

 count++;
 }

}

template <class T>
void MyStack<T>::dequeue()
{

	personNode *perPtr;
if(count == 0)
{
	cout << "the stack is empty";
}
else
{
	count--;
	perPtr = head;
	head = head->next;
	 delete perPtr;

}

}




#endif /* MYSTACK_H_ */
