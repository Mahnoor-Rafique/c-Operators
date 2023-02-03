#include <iostream>
//preprocessor directive
using namespace std;
int main()
//main function
{
	int x,y;
	 x=6;
	//assign value to the varible x
	y=8;
	//assign value to the variable y
	cout<<(x==y)<<endl ;
	//return 0 (false) because 6 in not equal to 8
	cout<<(x!=y)<<endl ;
	//return 1 (true) because 6 is not equal to 8
	cout<<(x>y)<<endl ;
	//return 0 (false) because 6 is not greater than 8
	cout<<(x<y)<<endl;
	//return 1 (true) because 6 is less than 8
	cout<<(x>=y)<<endl ;
	//return 0 (false) because 6 is not greater than equal to 8
	cout<<(x<=y) <<endl ;
	//return 1 (true) because 6 is less than equal to 8
	return 0;

}

