#include <stdio.h>
int stack[2];
void push(int val);
void pop();
int top=0;
int main()
{
  int ch=1,n;
  while(ch)
  {
 	printf("Enter 1 if one person wants to enter inside the room (or) Enter 0 if one person wants to leave the room: ");
 	scanf("%d",&n);
 	if(n==1)
 	{
   	push(n);
 	}
 	else
 	{
   	pop();
 	}
    }
}
 
void push(int val)
{
	if(top>2)
	{
  	printf("You are not allowed to enter inside the room and an Alarm will ring\n");
	}
	else if(top==2)
	{
  	printf("Room is filled no one allowed to enter inside the room\n");
	}
	else if(top==1)
	{
  	top=top+1;
  	stack[top]=val;
  	printf("Now Room is filled no one allowed to enter inside the room\n");
	}
	else if(top==0)
	{
  	top=top+1;
  	stack[top]=val;
  	printf("One person can enter inside the room\n");
	}
}
 
void pop()
{
  if(top==1)
  {
	top=top-1;
	printf("Two person can enter inside the room\n");
  }
  else if(top==2)
  {
	top=top-1;
	printf("One person can enter inside the room\n");
  }
  else if(top==0)
  {
  	printf("There is no person inside the room\n");
  }
}
