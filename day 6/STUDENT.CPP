#include<iostream.h>
#include<conio.h>

class student
{
	char name[20];
	int age;
    int roll;
	char gender[12];
	char dept[20];
	char college[30];
	public:
	void getdata()
	{	cout<<endl<<"enter name";
		cin>>name;
        cout<<endl<<"enter roll";
		cin>>roll;
		cout<<endl<<"enter age";
		cin>>age;
		cout<<endl<<"enter gender";
		cin>>gender;
		cout<<endl<<"enter your department" ;
		cin>>dept;
		cout<<endl<<"enter your college name";
		cin>>college;


	}
	void show()
	{ cout<<endl<< "name"<<name;
     cout<<endl<<"roll"<<roll;
	 cout<<endl<<"age"<<age;
	 cout<<endl<<"class"<<class1;
	 cout<<endl<<"gender"<<gender;
	 cout<<endl<<"department"<<dept;
	 cout<<endl<<"college"<<college;


	}
} ;

void main()
{
 student s1;
 clrscr();
 s1.getdata();
 s1.show();
 getch();



}
