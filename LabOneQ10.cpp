// Program to reverse an integer
//Trevor Doyle C00170053

#include <iostream>
using namespace std;

int main()
{
	int origNum;
	int remNum;
	int reverse=0;
	cout << "Enter number to be reversed: ";
	cin >> origNum;

	while (origNum != 0)
	{
		remNum = origNum % 10;
		reverse = reverse * 10 + remNum;
		origNum = origNum / 10;
	}
	cout << "The number reversed is: " << reverse;
	

	return 0;
}
