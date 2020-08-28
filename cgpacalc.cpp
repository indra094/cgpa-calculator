#include <iostream>
using namespace std;

int main() 
{
	int tot = 62;
	int cnt = 0;
	bool normalType = true;
	double marks = 0;
	double cgpa=0.0;
	while(cnt<tot)
	{
		cin>>marks>>normalType;
		if(marks == -1)
		{
			break;
		}
		cnt++;
		double totMarks = normalType? 125:75;
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
