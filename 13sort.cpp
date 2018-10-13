#include<iostream>
using namespace std;
class st
{

public:
	void selection(int m,float a[])
	{
	//selection sort
		int min;
			for(int i=0;i<m;i++)
			{
				min=i;
				for(int j=i+1;j<m;j++)
				{
					if(a[min]>a[j])
					{
						min=j;
					}
				}
				float temp;
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
			for(int i=0;i<m;i++)
			{cout<<"\t"<<a[i];}
			cout<<endl;
	}
	void bubble(int m,float a[])
	{
	//bubble sort
			for(int pass=1;pass<m;pass++)
			{
				for(int j=0;j<m-pass;j++)
				{
					if(a[j]>a[j+1])
					{
					float temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					}
				}
				
			}
			for(int i=0;i<m;i++)
			{cout<<"\t"<<a[i];}
			cout<<endl;	
	}
};
int main()
{
st s;
int t=0;
do
{
cout<<"\t\tsort\n";
cout<<"enter number of students"<<endl;
int c;
cin>>c;
float b[c];
cout<<"enter their percentages"<<endl;
for(int i=0;i<c;i++)
cin>>b[i];
cout<<"Sorting method\n";
cout<<"1.selection sort\n2.Bubble sort\nEnter sorting method\n";
int z;
cin>>z;
cout<<"\t\tsorting!!\n";
switch(z)
{
	case 1:
		s.selection(c,b);
		break;
	case 2:
		s.bubble(c,b);
		break;
	default:cout<<"Invalid\n";
		break;
}
cout<<"\nDo you want to continue[1/0]?\n";
cin>>t;
}
while(t==1);
}	
