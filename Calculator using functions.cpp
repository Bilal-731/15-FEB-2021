#include<iostream>

using namespace std;


	void add ()
	{
	float a,b;
	cout<<"Enter first number= ";
	cin>>a;
	cout<<"Enter second number= ";
	cin>>b;
float c=a+b;
	cout<<"The sum of given number is= "<<c;
	}


    void sub ()
{
float a,b;
	cout<<"Enter first number= ";
	cin>>a;
	cout<<"Enter second number= ";
	cin>>b;
float c=a-b;
	cout<<"The left amount will be= "<<c;
}


    void mul ()
    {
float a,b;
	cout<<"Enter first number= ";
	cin>>a;
	cout<<"Enter second number= ";
	cin>>b;
float c=a*b;
	cout<<"The multiplied amount will be= "<<c;
	}
    


	void div ()
	{
	float a,b;
	cout<<"Enter first number= ";
	cin>>a;
	cout<<"Enter second number= ";
	cin>>b;
float c=a/b;
	cout<<"The divided amound left will be= "<<c;	
	}


int main ()

{
	
	float choice;
	cout<<"which operation do you want to perform= "; 
	cin>>choice;
	

	
	if(choice==1)
	{
		cout<<add;
			add();
	cout<<endl;
	}else if(choice==2)
	{
		cout<<sub;
			sub();
	cout<<endl;
	}else if(choice==3)
	{
		cout<<mul;
		mul();
	cout<<endl;
	}else if(choice==4)
	{
		cout<<div;
			div();
	}else{
		cout<<"invalid operation !";
	}


	

}




