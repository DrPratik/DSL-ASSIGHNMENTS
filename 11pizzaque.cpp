#include<iostream>
using namespace std;
#define size 5
class pizza
{
	public:
	struct queue
{
	int queue[size];
	int front,rear;
}q;
	pizza()
	{
		q.front=q.rear=-1;
	}
	int qfull()
	{
		if(q.front==(q.rear+1)%size)
		return 1;
		else
		return 0;
	}
	int qempty()
	{
		if(q.front==-1)
		return 1;
		else
		return 0;
	}
	int accept(int item)
	{
		if(q.front==-1)
		{	
			q.front=q.rear=0;
			q.queue[0]=item;
		}
		else
		{
			q.rear=(q.rear+1)%size;
			q.queue[q.rear]=item;
			return q.queue[q.rear];
		}
	}
	int ready()
	{
		int i=q.front;
		cout<<q.queue[q.front]<<"this order is ready"<<endl;
		q.front=(q.front+1)%size;
	}
	void display()
	{
		int i=q.front;
		while(i!=q.rear)
		{
			cout<<"\t"<<q.queue[i];
			i=(i+1)%size;
		}
		cout<<"\t"<<q.queue[i];
	}
};
int main()
{
	pizza a;
	char d;
	do
	{
		cout<<"----------------------------------------"<<endl;
		cout<<"\t\tPizza Delivery"<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"\n1.Book a deal\n2.show orders\n3.ready orders\n";
		int ch;
		cout<<"Enter choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter order number\n";
					int a1;
					cin>>a1;
					a.accept(a1);
					cout<<"order placed succesfully\n";break;
			case 2:cout<<"order placed are\n";
				a.display();break;
			case 3:a.ready();break;
			default:cout<<"invalid";break;
		}
		cout<<"Do you want to continue[y/n]?"<<endl;
		cin>>d;
	}
	while(d=='y'||d=='Y');
}
			
		
