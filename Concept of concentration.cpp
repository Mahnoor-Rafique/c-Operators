#include <iostream>
//preprosessor directive
using namespace std;
int main()
//main function
{
	//opening braces
	string f_name="Warda";
	//assign your first name
	string l_name="Rafique";
	//assign your last name
	string fullname=f_name.append(l_name);
	
	cout<<fullname;
	//print fullname
	return 0;
}
//closing braces
