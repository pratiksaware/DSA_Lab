#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;
struct queue
{
int data[MAX];
int front, rear;
};
class Queue
{
struct queue q;
public:
Queue() { q.front = q.rear = -1; }
int isempty();
int isfull();
void enqueue(int);
int delqueue();
void display();
};
int Queue::isempty()
{
return (q.front == q.rear) ? 1 : 0;
}
int Queue::isfull()
{
return (q.rear == MAX - 1) ? 1 : 0;
}
void Queue::enqueue(int x)
{
q.data[++q.rear] = x;
}
int Queue::delqueue()
{
return q.data[++q.front];
}
void Queue::display()
{
for (int i = q.front + 1; i <= q.rear; i++)
cout << q.data[i] << " ";
}
int main()
{
Queue obj;
int ch, x;
cout << "A84 Varun More\n\n";
do
{
cout << "\n To Insert data -> Press 1 \n ";
cout << "\n To Delete data -> Press 2 \n";
cout << "\n To Display data -> Press 3 \n";
cout << "\n To Exit -> Press 4 \n";
cout << "\n Enter your choice : ";
cin >> ch;
switch (ch)
{
case 1:
if (!obj.isfull())
{
cout << "\n Enter data : ";
cin >> x;
obj.enqueue(x);
}
else
cout << "Queue is overflow...\n";
break;
case 2:
if (!obj.isempty())
{
cout << "\n Deleted Element is = " << obj.delqueue();
}
else
{
cout << "\n Queue is underflow...\n";
}
cout << "\nRemaining Elements are : ";
obj.display();
break;
case 3:
if (!obj.isempty())
{
cout << "\n Queue contains : ";
obj.display();
cout << "\n";
}
else
cout << "\n Queue is empty...\n";
break;
case 4:
cout << "\n Exit...";
}
} while (ch != 4);
return 0;
}