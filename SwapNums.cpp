//Program to swap two numbers
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int numOne;
	int numTwo;
	int tempNum;

	cout << "Enter first Num";
	cin >> numOne;

	cout << "Enter second Num";
	cin >> numTwo;

	tempNum = numOne;
	numOne = numTwo;
	numTwo = tempNum;

	cout << "First Num is " << numOne;
	cout << "Second Num is " << numTwo;


	
	return 0;


}
