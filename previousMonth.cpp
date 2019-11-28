#include<stdio.h>
#include<iostream>
using namespace std;
class calender
{
	int mm,dd,wd,totaldays,initial,k,temp;

	int month[40];
	
	public:
		void getdata()
     { int i;
	
		cout<<"Enter today's date and month: ";
		cin>>dd>>mm;
		cout<<"\nEnter today's week day(1-7)(Remember week start with Sunday!): ";
		cin>>wd;
		for(i=0;i<40;i++)
		month[i]=99099;
	}
	void weekHead()
	{
		cout<<"  Su  Mo  Tu  Wd  Th  Fr  Sa\n";
		cout<<"-------------------------------\n";
	}
	void tdays(int m)
	{
		
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		totaldays=31;
		else
		if(m==2)
		totaldays=28;
		else
		totaldays=30;
		
	}
	int findInitial()
	{
	
	while(dd>7)
	dd-=7;
	
	if(dd==1)
	initial=wd;
	else if(dd==2)
	initial=wd-1;
	else if(dd==3)
	initial=wd-2;
	else if(dd==4)
	initial=wd-3;
	else if(dd==5)
	initial=wd-4;
	else if(dd==6)
	initial=wd-5;
	else if(dd==7)
	initial=wd-6;
	
	if(initial==0)
	initial=7;
	else
	if(initial==-1)
	initial=6;
	else
	if(initial==-2)
	initial=5;
	else
	if(initial==-3)
	initial=4;
	else if(initial==-4)
	initial=3;
	else if(initial==-5)
	initial=2;
	else if(initial==-6)
	initial=1;
	
	
	return initial;
	}
	
	void previousMonth()
	{
	int i,j,m;
	k=1;
		initial=findInitial()-1;
		m=mm-1;
		tdays(m);
		wd=initial;
		dd=totaldays;
		initial=findInitial();
		j=1;
	weekHead();
	for(i=1;i<initial;i++)
{
		cout<<"    ";
		j++;
		if(j%7==0)
		cout<<endl;	
		
		
	}
j-=1;
	temp=j;
	
	for(i=initial;i<=totaldays+temp;i++)

{       if(k<=9)
		cout<<"   "<<k;
		else
		cout<<"  "<<k;
		j++;
		k++;
		if(j%7==0)
		cout<<endl;	
	}
	
}
	/*cout<<initial;
	            for(i=totaldays;i>=initial;i--)
		          month[i]=i;
	
		
		weekHead();
		j=1;
	for(i=1;i<=totaldays;i++)
	{
		if(month[i]==99099)
		cout<<"    ";
		else if(month[i]<=9)
		cout<<"   "<<month[i];
		else
		cout<<"  "<<month[i];
					
		
		if(j%7==0)
		cout<<endl;
		j++;
	}
}


*/
};


int main()
{
calender cal;
cal.getdata();
cal.previousMonth();
	return 0;
}
