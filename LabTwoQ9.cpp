//Trevor Doyle C00170053
#include <iostream>
#include <array>
using namespace std;


int main()
{

	const int arraySize = 12;
	int delValue = 2;
	int count = 0;
	





	int intArray[arraySize] = { 1,55,56,2,13,114,19,88,90,10,11 };

	for (int k = 0; k < arraySize; k++)
	{
		if (intArray[k] != 0) {
			count++;
		}
		
		cout << "\n orig elements are : " << intArray[k];

	}




	cout << "\n Total count is " << count;
	/*for (int k = 0; k < arraySize; k++)
	{
		cout << "\n orig elements are : " << intArray[k];

	}*/
	if (delValue>=0 && delValue < count)
	{
		if (count < arraySize)
		{
			for (int i = delValue; i < count; i++) {
				intArray[i] = intArray[i + 1];
			}


			count--;
		}
		else {
			cout << "\n Error,Cannot exceed count";

		}
	}
	for (int j = 0; j < arraySize; j++)
	{
		cout << "\n New elements are : " << intArray[j];

	}

	cout << "\n Total count is " << count;






	return 0;



}
