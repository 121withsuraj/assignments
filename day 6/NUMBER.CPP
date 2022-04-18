#include<iostream.h>
#include<conio.h>

class number
{   int num;
	
	public:
	void evenodd(int n)
	{	
        num=n;
        if(n%2==0)
            cout<<endl<<num<<"-Number is EVEN";
        else
            cout<<endl<<num<<"-Number is ODD";
        
	}
	void posneg(int n)
	{ 
        num=n;
	if(n>0)
	    cout<<endl<<num<<"-Number is POSITIVE";
	else if(n<0)
	    cout<<endl<<num<<"-Number is NEGETIVE";
	else
	    cout<<endl<<num<<"-Number is ZERO";
	}
    void abso(int n)
    {
	num=n;
	if(n<0)
	{
	    num= n * (-1);
	    cout<<endl<<"The absolute value of no-"<<num<<"is:"<<num;
	}
	else if(n>0)
	    cout<<endl<<"The absolute value of no-"<<num<<"is:"<<num;
        else
            cout<<endl<<"Number is zero";
    }
} ;

void main()
{
 number n;
 int n1;
 clrscr();
    cout<<endl<<"Enter a Number";
    cin>>n1;
    
   n.evenodd(n1);
   n.posneg(n1);
   n.abso(n1);
   getch();


}
