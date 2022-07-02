#include "MyStack.h"



int main()
{




MyStack<int> intQ;
MyStack<float> floatQ;
MyStack<char> charQ;

charQ.IsEmpty();
cout << endl;
charQ.IsFull();
cout << endl;
charQ.IsFront();
cout << endl;
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.enqueue('a');
charQ.IsFull();
cout << endl;
charQ.IsEmpty();
cout << endl;
charQ.IsFront();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
charQ.dequeue();
cout << endl;

charQ.enqueue('a');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('b');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('c');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('d');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('e');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('f');
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.enqueue('g');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('h');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('i');
charQ.DisplayStack();
cout << endl;
charQ.enqueue('j');
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;
charQ.dequeue();
charQ.DisplayStack();
cout << endl;

intQ.enqueue(1);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(2);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(3);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(4);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(5);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(6);
intQ.DisplayStack();
cout << endl;


intQ.dequeue();
intQ.DisplayStack();
cout << endl;
intQ.dequeue();
intQ.DisplayStack();
cout << endl;

intQ.enqueue(7);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(8);
intQ.DisplayStack();
cout << endl;
intQ.enqueue(9);
intQ.DisplayStack();
cout << endl;

intQ.dequeue();
intQ.DisplayStack();
cout << endl;
intQ.dequeue();
intQ.DisplayStack();
cout << endl;
intQ.dequeue();
intQ.DisplayStack();
cout << endl;
intQ.dequeue();
intQ.DisplayStack();
cout << endl;

floatQ.enqueue(1.1);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(2.2);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(3.3);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(4.4);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(5.5);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(6.6);
floatQ.DisplayStack();
cout << endl;

floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;

floatQ.enqueue(7.7);
floatQ.DisplayStack();
cout << endl;
floatQ.enqueue(8.8);
floatQ.DisplayStack();
cout << endl;

floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;
floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;
floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;
floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;
floatQ.dequeue();
floatQ.DisplayStack();
cout << endl;

	return 0;
}
