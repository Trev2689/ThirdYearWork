//Trevor Doyle C00170053
#include <iostream>
using namespace std;


int main()
{
	int evenCount = 0;
	int oddCount = 0;
	const int arraySize = 11;
	int intArray[arraySize] = { 1,2,3,4,5,6,7,8,9,10,13 };
	for (int i = 0; i < arraySize; i++)
	{
		if (intArray[i] % 2 == 0)
		{
			evenCount++;
		}
		else {
			oddCount++;
		}
	}
	

	



	cout << "Even count is : " << evenCount;
	cout << " Odd count is : " << oddCount;


	return 0;



}
