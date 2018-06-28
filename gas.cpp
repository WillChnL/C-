#include <iostream>
using namespace std;

int main()
{
	double gallons = 12;                     
	double miles = 350;                      
	double milesPerGallon = miles / gallons;  

	cout << "The car drove " << miles << " miles on "
	   	 << gallons << " gallons of gas.\n"
	     << "It got " << milesPerGallon << " miles per gallon.\n\n";

	return 0;
}
