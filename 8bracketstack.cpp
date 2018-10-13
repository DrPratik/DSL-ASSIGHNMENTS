//============================================================================
// Name        : Stack.cpp
// Author      : NINAD MANJARAMKAR
// Version     : FINAL VERSION
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
//
/*
 * TO CHECK IF THE GIVEN EXPRESSION IS BALANCED:
 * CREATE A STACK(CHAR TYPE)
 * TAKE INPUT FROM USER IN FORM OF CHAR ARRAY
 * SCAN INPUT EXPRESSION CHARECTER BY CHARECTER
 * IF CHAR IS OPENING TYPE('(','[','{') THEN PUSH IT ONTO STACK
 * IF CHAR IS CLOSING TYPE(')',']','}') THEN IF TOP OF STACK IS A MATCHING OPENING TYPE THEN POP TOP ELEMENT.
 * IF ALL ELEMENTS ARE POPPED OR IF STACKEMPTY THEN EXPRESSION IS BALANCED.
 * OPTIONALLY STACK CONTENTS CAN ALSO BE DISPLAYED.
 */
#include <iostream>
#include <cstring>

using namespace std;

class Stack
{
private:
    int top;
    char a[20];

public:
    Stack()
    {
        top = -1;
    }
    void push(char x);
    void pop();
    int compare(char a , char b);
    int isbalanced(char *exp);
    int isfull();
    int isempty();



};


int Stack :: isempty()
{
	if(top==-1)
	{
    	return 0;
	}
	else
	{
	return 1;
	}
}
int Stack :: isfull()
{
	if(top == 19)
    {
	return 0;
	}	
	else
	{
	return 1;
	}
}
void Stack :: push(char x)
{
    if(isfull())
    {
        top++;
        a[top]=x;
    }
    else
    {
        cout << "stack full";
    }
}


void Stack :: pop()
{
    if(isempty())
    {

        top--;
    }
    else
    {
        cout << "stackempty";
    }
}

int Stack :: compare(char a , char b)
{
    if(a=='('&&b==')')
    {
        return 1;
    }
    else if(a=='['&&b==']')
    {
        return 1;
    }
    else if(a=='{'&&b=='}')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Stack :: isbalanced(char *exp)
{
    int size = strlen(exp);
    int setflag=0;

    for(int i=0;i<size;i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
        {
            push(exp[i]);

        }

        if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(compare(a[top],exp[i]))
            {
                pop();

            }
            else
                setflag=1;

        }

    }


    if(top==-1 && setflag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    Stack S;
    char z[20];
    cout<<"-------------------------------------"<<endl;
    cout<<"Expression parenthesis\n";
    cout<<"-------------------------------------"<<endl;
    int t;
    do
    {
	    cout << " enter expression string : ";
	    cin >> z;
	    int k = S.isbalanced(z);

	    if(k==1)
	    {
		  cout << "BALANCED EXPRESSION";
	    }
	    else
	    {
		  cout << "UNBALANCED EXPRESSION";
	    }
	cout<<"\nenter 1 to continue"<<endl;
      cin>>t;
	}
	while(t==1);
}
