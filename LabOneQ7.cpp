//Program to find largest of three numbers
//Trevor Doyle C00170053
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int numOne;
	int numTwo;
	int numThree;

	cout << "Enter first Num";
	cin >> numOne;

	cout << "Enter second Num";
	cin >> numTwo;

	cout << "Enter third Num";
	cin >> numThree;

	if (numOne > numTwo && numOne > numThree)
	{
		cout << numOne << " is the largest";
	}
	else if (numTwo > numOne && numTwo > numThree)
	{
		cout << numTwo << " is the largest ";
	}
	else if (numThree > numOne && numThree > numOne)
	{
		cout << numThree << "is the largest ";
	}





	return 0;


}
