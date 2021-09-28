#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int arr[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
int item;
if(rear == MAX-1)
{
printf("The Queue is full\n");
}
else
{
if(front == -1)
{
front = 0;
}
printf("\nEnter the element you want to insert : ");
scanf("%d",&item);
rear++;
arr[rear] = item;
}
}

void dequeue()
{
if(front == -1 || front > rear)
{
printf("\nQueue is Empty\n");
}
else
{
printf("The element deleted : %d\n",arr[front]);
front++;
}
}

void display()
{
int i;
printf("\nElements in the Queue are : ");
for(i=front;i<=rear;i++)
{
printf("%d ",arr[i]);
}
}

int main()
{
int ch;
while(1)
{
printf("Enter your choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;

case 2:
dequeue();
break;

case 3:
display();
break;

case 4:
exit(1);
break;

default:
printf("\nInvalid Input");
break;
}
}
return 0;
}

