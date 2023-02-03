#include <iostream>
//preprosessor directive
using namespace std;
int main()
//main function
{
	//opening braces
	int x,y;
	int Add,Subtract,Multiply,Division,Modulus;
	string Name="Warda Rafique \n";
	string Roll="bsf2205776 \n";
	string ID="\awardarafique82@gmail.com \n";
	cout<<Name;
	//Enter your name
	cout<<Roll;
	//Enter your roll
	cout<<ID;
	//Enter your email Id
	cout<<"Enter first number:\n";
	cin>>x;
	cout<<"Enter second number:\n";
	cin>>y;
	Add=x+y;
	//take sum of two numbers
	cout<<"sum="<<x+y<<endl ;
	Subtract=x-y;
	//take subtraction of x and y
	cout<<"subtract="<<x-y<<endl ;
	Multiply=x*y;
	//take multiplication of x and y
	cout<<"multiply="<<x*y<<endl ;
	Division=x/y;
	//divide two numbers x and y
	cout<<"division="<<(float)x/y<<endl ;
	Modulus=x%y;
	//take mod of two numbers
	cout<<"modulus="<<x%y<<endl ;
	return 0;
}
//closing braces
	
