#include<iostream.h>
#include<conio.h>

class sal
{    
     int empid;
     char name[30];
     int department;
     int emptype;
     int n1,n2,grs;

    public:

	    void empdata()
	    {
		cout<<endl<< "Enter your name--";
		cin>>name;
		cout<<endl<< "Enter your EMP ID--";
		cin>>empid;
		cout<<endl<< "Enter your department- hr=1 /it=2 /nonit=3 -- ";
                cin>>department;   
		cout<<endl<<"Enter your Employment type- temp / permanent (temp=1/ permanent=2)--";
		cin>>emptype;

	    }

	    void salcal()
	    {
		if(emptype==1)
		{
		    if(department==1)
			n1=10000;

		    else if(department==2)
			 n1=30000;
		    else
			 n1=15000;

		    grs= n1+500;

		   cout<<endl<<"EMP ID-"<<empid;
		   cout<<endl<<"NAME-"<<name;
		   cout<<endl<<"DEPARTMENT-"<<department;
		   cout<<endl<<"EMP TYPE-"<<emptype;

		   cout<<endl<<"YOUR BASIC SAL-"<<n1;
		    cout<<endl<<"YOUR GROSS SAL( including OT ) -"<<grs;

		}

		else if(emptype==2)
		{

		    if(department==1)
		     n1=15000;
		    else if(department==2)
			n1=40000;
		    else
			n1=20000;

		    n2= n1 - (n1*(0.1));
		    grs= n2 + (n1* 0.07)+ 500;

		   cout<<endl<<"EMP ID-"<<empid;
		   cout<<endl<<"NAME-"<<name;
		   cout<<endl<<"DEPARTMENT-"<<department;
		   cout<<endl<<"EMP TYPE-"<<emptype;

		   cout<<endl<<"YOUR BASIC SAL-"<<n1;
		    cout<<endl<<"YOUR GROSS SAL( including DA, HRA , OT ) -"<<grs;
                                          
                    
                }
                else
                    cout<<endl<< "something wrong";
                
            }
    

    
    
    
};



void main()
{
    sal s;
    clrscr();
    s.empdata();
    s.salcal();
    getch();
    
}