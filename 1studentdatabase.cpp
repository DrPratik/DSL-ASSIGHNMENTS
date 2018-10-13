#include <iostream>
using namespace std;
int m[31];
void init()
{
	for(int i=0;i<31;i++)
		{m[i]=0;}
}
class student
{
	static int absent,max,min,sum,count;//static variables
	char name[10];int roll,marks,x,y;
	public:void get()
	{
		cout<<"enter name";
		cin>>name;//accepting name
		cout<<"\nenter marks";
		cin>>marks;//accepting marks
		if(marks<0)
		{
			absent++;//incrementing value of absent students if condition found true
		}
		else
			{
			m[marks]++;
			if(marks<min)
				min=marks;//assigning minimum marks
		if(marks>max)
				max=marks;//assigning maximum marks if condition found true
		sum=sum+marks;//adding marks
			}count++;//incrementing in total value of students

	}
	void rtd()
	{
		x=m[0];
		for(int i=0;i<31;i++)
		{
			if(m[i]>x)
			{x=m[i];
			y=i;
			}
		}
	}
	void op()
	{
		cout<<"maximum marks are"<<max;
		cout<<"\nminimum marks are"<<min;
		cout<<"\nnumber of absent students are"<<absent;
		int avg,present;
		present=count-absent;//finding total students
		avg=sum/present;//calculating average
		cout<<"\naverage marks of the class are"<<avg;
		cout<<"\n"<<y<<"marks scored by"<<x<<"students";
	}

};int student::max=0;
int student::min=30;//static variable decleartion
int student::absent;
int student::sum;
int student::count;
int main()
{
	init();
	student s1,s2,s3;//creating objects
	s1.get();
	s2.get();
	s3.get();
	s3.rtd();
	s3.op();
}
