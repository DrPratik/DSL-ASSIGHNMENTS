#include<iostream>
using namespace std;
struct dq
{
	int data;
	dq *next;
	dq *prev;
}q;
class dqueue
{
	dq *front;
	dq *rear;
	public:
	dqueue()
	{
		front=rear=NULL;
	}
	void add_front()
	{
		dq *nn;
		nn=new dq;
		cout<<"Enter data"<<endl;
		cin>>nn->data;
		if(front==NULL && rear==NULL)
		{front=rear=nn;}
		else
		{
		front->prev=nn;
		nn->next=front;
		front=nn;
		}
	}
	void add_last()
	{
		dq *nn;
		nn=new dq;
		nn->next=nn->prev=NULL;
		cout<<"Enter data"<<endl;
		cin>>nn->data;
		if(front==NULL && rear==NULL)
		{front=rear=nn;}
		else
		{
		rear->next=nn;
		nn->prev=rear;
		rear=nn;
		}
	}
	void display()
	{
		dq *cn;
		cn=front;
		while(cn->next!=NULL)
		{
			cout<<"\t"<<cn->data;
			cn=cn->next;
		}
		cout<<"\t"<<cn->data;
	}
	void delete_end()
	{
		dq *cn;
		cn=rear;
		
		rear=rear->prev;
		rear->next=NULL;
		delete(cn);
	}
	void delete_start()
	{
		dq *cn;
		cn=front;
		
		front=front->next;
		front->prev=NULL;
		delete(cn);
	}
};
int main()
{
	dqueue q1;
	int c;
	do
	{
	cout<<"-----------------------------------"<<endl;
	cout<<"Dequeue\n";
	cout<<"-----------------------------------"<<endl;
	cout<<"1.Add element at front side\n2.Add element at back side\n3.display dequeue\n4.Delete at end\n5.Delete at start\n";
	cout<<"enter choice\n";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
		q1.add_front();
		cout<<"Element addes at front successfully\n";
		break;
		case 2:
		q1.add_last();	
		cout<<"Element addes at last successfully\n";
		break;
		default:cout<<"wrong input"<<endl;break;
		case 3:
		q1.display();
		break;
		case 4:
		q1.delete_end();
		break;
		case 5:
		q1.delete_start();
		break;
	}
	cout<<"\nDo you want to continue[1/0]?\n";
	cin>>c;
	}
	while(c==1);
}

