#include<stdio.h>
#include<stdlib.h> 
struct stack 
{
int data;
};

void push(struct stack x[],int *top,int n,int item)
{
if(*top == n-1)
{
printf("The stack is full\n");
}
else
{
(*top)++;
x[*top].data = item;
}
}

void pop(int *top)
{
if(*top == -1)
{
printf("Stack is Empty\n");
}
else
{
(*top)--;
}
}

void display(struct stack x[],int top)
{
int i;
if(top == -1)
{
printf("The stack is empty\n");
}
else
{
printf("The elements in the stack are - ");
for(i=0;i<=top;i++)
{
printf("%d ",x[i].data);
}
}
}

void peek(struct stack x[],int top)
{
printf("The peek element is : %d\n",x[top].data);
}

void main()
{

struct stack arr[10];
int top =-1,item=0,ch;

while(1)
{
printf("Enter your choice:\n1.push\n2.pop\n3.display\n4.Peek\n5.Exit\n");
scanf("%d",&ch);
switch(ch)
{

case 1:
printf("Enter the element to push : ");
scanf("%d",&item);
push(arr,&top,10,item);
break;

case 2:
pop(&top);
break;

case 3:
display(arr,top);
break;

case 4:
peek(arr,top);
break;

case 5:
exit(0);
break;

default :
printf("invalid input");
}
}
}
