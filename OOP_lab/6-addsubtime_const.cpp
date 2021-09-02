#include<iostream>

using namespace std;

class Time
{
	int hour;
	int min;
	int sec;
public:
	Time(class Time t1,class Time t2,char op)
	{
		if(op == '-')
		{
		hour =  t1.hour - t2.hour;
		min = t1.min - t2.min;
		sec = t1.sec - t2.sec;
		  if(sec>60)
		  { 
             hour += sec/60;
             sec = sec%60;
		  }
		  if(min>60)
		  {
		  	hour += min/60;
		  	min = min%60;
		  }
	   }
	   else if(op == '+')
		{
		hour =  t1.hour + t2.hour;
		min = t1.min + t2.min;
		sec = t1.sec + t2.sec;
		 if(sec>60)
		  { 
             min += sec/60;
             sec = sec%60;
		  }
		  if(min>60)
		  {
		  	hour += min/60;
		  	min = min%60;
		  }
	    }
	}
	Time(int h,int m,int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	void show()
	{
		cout<<hour<<" : "<<min<<" : "<<sec;
	}
};

int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter 1st time in hrs min sec"<<endl;
    cin>>a>>b>>c;
    cout<<"Enter 2nd time in hrs min sec"<<endl;
    cin>>d>>e>>f;

   class Time t1(a,b,c);
   class Time t2(d,e,f);
   cout<<"\naddition of time \n";
   class Time t4(t1,t2,'+');
   cout<<"subtraction of time \n";
   class Time t3(t1,t2,'-');
   t3.show();
   
   t4.show();
}