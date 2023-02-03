#include <iostream>
//preprosessor directive
using namespace std;
int main()
//main function
{
	//opening braces
	int x,y;
	 x=5,y=6;
	//declare and assign values to x and y
	cout<<(x>3&&y<5)<<endl ;
	//return 0 (false) 
	cout<<(x>3||y>5)<<endl ;
	//return 1 (true)
	cout<<!(x>3||y>5)<<endl ;
	//return 0 (false)
	return 0;
}
//closing braces
