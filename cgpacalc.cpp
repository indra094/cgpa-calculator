#include <iostream>
using namespace std;

int main() 
{
	int tot = 62;
	int cnt = 0;
	unsigned int type = 1;
	double marks = 0;
	double cgpa=0.0;
	while(cnt<tot)
	{
		cin>>marks>>type;
		if(marks == -1)
		{
			break;
		}
		cnt++;
		double totMarks = 100;
		switch(type)
		{
			case 0:
			totMarks = 75;
			break;
			case 1:
			totMarks = 125;
			break;
			case 2:
			totMarks = 200;
			break;
			case 3:
			totMarks = 50;
			break;
			default:
			break;
		}
		double percentage = marks/totMarks*100;
		if(percentage<50)
		{
			cgpa+=2.0;
		}
		else if(percentage<60)
		{
			cgpa+=3.0;
		}
		else
		{
			cgpa+=4.0;
		}
		//cout<<"cgpa is "<< cgpa<<"\n cnt is "<<cnt<<'\n';
	}
	cout<<"cgpa is "<<cgpa/cnt;
}
