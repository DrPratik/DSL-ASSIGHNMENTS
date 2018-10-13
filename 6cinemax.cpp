#include<iostream>
using namespace std;
struct node
{	
	node *prev;
	char data,name[10];
	node *next;
};
class doublell
{	node *nn;
	node *cn;
	node *a[10];
	public:
	node *header;
	doublell()
	{
	header = NULL;
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<7;j++)
	{
	nn=new node;
	nn->data='A';
	if(j==0)
	{
	a[i]=nn;
	a[i]->prev=a[i];
	a[i]->next=a[i];
	}
	else
	{
	cn=a[i];
	do
	{
	cn=cn->next;
	}
	while(cn->next!=a[i]);
	nn->next=cn->next;
	cn->next->prev=nn;
	cn->next=nn;
	nn->prev=cn;
	}
	}
	}
}
	void bookseat();
	void display();
	void cancelticket();
};
void doublell::bookseat()
{	
	int row,seat,n,j=0;
	cout<<"enter number of seats"<<endl;
	cin>>n;
	for(int w=0;w<n;w++)
	{
	cout<<"\nenter row and seat"<<endl;
	cin>>row;
	cin>>seat;
	if(row>10||row<0||seat>7||seat<0)
	{
		cout<<"Invalid choice"<<endl;
		return;
	}
	node *cn;
	cn=a[--row];

	for(int i=1;i<seat;i++)
	{
		cn=cn->next;
	}
	
	if(cn->data=='A')
	{
	cn->data='B';
	cout<<"\nEnter Name:"<<endl;
	cin>>cn->name;
	}
	}
	
}
void doublell::cancelticket()
{
	int row,seat,n;
	cout<<"Enter number of seats to cancel "<<endl;
	cin>>n;
	for(int w=0;w<n;w++)
	{
	cout<<"enter row and seat number to cancel booking"<<endl;
	cin>>row;
	cin>>seat;
	if(row>10||row<0||seat>7||seat<0)
	{
	cout<<"INVALID choice"<<endl;
	return;
	}
	cn=a[--row];
	for(int i=1;i<seat;i++)
	{
	cn=cn->next;
	}
	if(cn->data=='A')
	{
	cout<<"Seat is already unoccupied"<<endl;
	}
	else
	{
	cn->data='A';
	}
	}
}
void doublell::display()
{
	for(int j=0;j<8;j++)
		cout<<j<<"\t";

	cout<<"\n";
	for(int j=0;j<8;j++)
		cout<<"--------";

	cout<<"\n";
	for(int i=0;i<10;i++)
	{
		cn=a[i];
		int k=i;
		cout<<++k<<"\t";
		for(int j=0;j<7;j++)
		{
			cout<<cn->data<<"\t";
			cn=cn->next;
		}
		cout<<"\n";
	}

	
}
int main()
{
	doublell d;
	int ch;char ans;
	do
	{
	cout<<"\t\t\tBOOKMYTICKET"<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	d.display();
	cout<<"1. Book tickets\n2. Cancel tickets\n3. Display Arrangments\n";
	cout<<"Enter Choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:d.bookseat();
			break;
		case 2:d.cancelticket();
			break;
		case 3:d.display();
			break;
		default:cout<<"INVALID choice";
			break;
	}
	cout<<"To continue Press Y/y and any key to exit";
	cin>>ans;
	}
	while(ans=='Y'||ans=='y');

}
	
