//Trevor Doyle C00170053
#include <iostream>
#include <array>
using namespace std;


int main()
{

	const int arraySize = 12;
	int arrIndex = 2;
	int count = 0;
	int newElt = 77;





	int intArray[arraySize] = { 1,55,56,2,13,114,19,88,90,10,11}; //Delete 1 element to test functionality

	
	for (int k = 0; k < arraySize; k++)
	{
		if (intArray[k] != 0) {
			count++;
		}
		
		cout << "\n orig elements are : " << intArray[k];

	}
	cout << "\n Total count is " << count;
	if(count < arraySize)
	{

		for (int i = count; i > arrIndex; i--) {
			intArray[i] = intArray[i - 1];
		}

		intArray[arrIndex] = newElt;
		count++;
	}
	else {
		cout << "\n Error,Cannot exceed count";
	}
	for (int j = 0; j < arraySize; j++)
	{
		cout << "\nNew elements are : " << intArray[j];

	}

	cout << "\nTotal count is " << count;






	return 0;



}
