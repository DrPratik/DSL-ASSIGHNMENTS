#include<iostream>
using namespace std;
void copy(char s[],char s1[])
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
	s[i]=s1[i];
	}
	s[i]='\0';
	cout<<s<<endl;
}
int length(char s[])
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	count++;
	return count;
}
void compare(char s1[],char s2[])
{
	int flag;
	for(int i=0;s1[i]!='\0';i++)
	{

	if(s1[i]==s2[i])
	 	{
	 	 flag=1;
		 }
	 else
		 {
	  flag=0;
 		}
	}
	if(flag==1 && length(s1)==length(s2))
	cout<<"strings are same"<<endl;
	else
	cout<<"strings are not same"<<endl;
}
void concat(char s1[],char s2[])
{
	char s[20];
	int i,k=0;
	for(i=0; s1[i]!='\0';i++)
	{
	s[i]=s1[i];

	}
	while(s2[k]!='\0')
	{
	s[i]=s2[k];
	k++;
	i++;
	}
	s[i]='\0';
	cout<<s<<endl;
}
void reverse(char s[])
{
	char s1[20];
	int i;
	for(i=0;s1[i]!='\0';i++);
	while(s1[i]!=s1[0])
	{
	cout<<s[i];
	i--;
	}
	cout<<s[i]<<endl;
}
int main()	
{
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"string operations without using in-built library functions \n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"1)Copy string\n2)Compare String\n3)Concatenate string\n4)Findinng length of string\n5)reversing"<<endl;
	char r;
	
	do
	{	
	int ch;
	cout<<"\nEnter choice"<<endl;
	cin>>ch;
	char c[20],c1[20];
	switch(ch)
	{
	case 1: 
	cout<<"enter string to copy"<<endl;
	cin>>c;
	copy(c1,c);
	break;
	case 2:
	cout<<"enter string 1"<<endl;
	cin>>c;
	cout<<"enter string 2"<<endl;
	cin>>c1;
	compare(c,c1);
	break;
	case 3:
	
	cout<<"enter string 1"<<endl;
	cin>>c;
	cout<<"enter string 2"<<endl;
	cin>>c1;
	concat(c,c1);
	break;
	case 4:int j;
	cout<<"enter string"<<endl;
	cin>>c;
	j=length(c);
	cout<<"length of string is"<<j<<endl;
	break;
	case 5:
	cout<<"enter strring";
	cin>>c;
	reverse(c);
	break;
	default:cout<<"Wrong input"<<endl;
	break;
	}
	cout<<"To continue press Y and any key to exit "<<endl;
	cin>>r;
	}
	while(r=='Y' || r=='y');
}
