#include<iostream>

struct node
{
	int val;
	struct node *next;
};

struct node *temp, *top=NULL;

void push(int data)
{
	temp = new struct node;
	temp->val = data;
	if(top!=NULL)
		temp->next = top;
	top=temp;
}

void pop()
{
	temp = top;
	if(top!=NULL)
	{
		top = top->next;
		std::cout<<temp->val<<"\n";
		delete temp;
	}
	else
		std::cout<<"\nStack Empty\n\n";
}

void display()
{
	temp = top;
	while(temp!=NULL)
	{
		std::cout<<temp->val<<" ";
		temp = temp->next;
	}
	std::cout<<"\n";
}

int main()
{
	std::string ch;
	int a;
	std::cout<<"commands: description\n";
	std::cout<<"push <value> : inserts value into the stack\n";
	std::cout<<"pop : deletes from front of stack\n";
	std::cout<<"display : displays elements of the stack\n";
	std::cout<<"quit : quits program\n\n";
	do
	{
		std::cout<<"Enter command:  ";
		std::cin>>ch;
		if(ch.compare("push")==0)
		{	
			std::cin>>a;
			push(a);
		}
		else if(ch.compare("pop")==0)
			pop();
		else if(ch.compare("display")==0)
			display();
		else if(ch.compare("quit")==0)
			break;
		else
			std::cout<<"\nInvalid command\n\n";
	}while(1);
}