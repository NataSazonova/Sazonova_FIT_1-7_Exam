#include <iostream>

int main()
{
	int arr[] = { 4,8,2,-8,-10,9,0 };
	int OutputArray[7];
	int min = arr[0];

	for (int i = 0; i < 7; i++)
		if (arr[i] < min)
			min = arr[i];

	std::cout << "Minimal element of mass: "; //Мінімальний елемент

	int Sum = 0;
	int Second = 0;
	int First = 0;

	for (int i = 0; i < 7; i++)
		if (arr[i] > 0)
		{
			First = i;
			break;
		}

	for (int i = 7; i > -1; i--)
		if (arr[i] > 0)
		{
			Second = i;
			break;
		}

	for (int i = First + 1; i < Second; i++)
		Sum += arr[i];

	std::cout << "Sum of elements between {0} and {1} elements: "; //Сума додатніх чисел

	int CountOfnull = 0;

	for (int i = 0; i < 7; i++)
		if (arr[i] == 0)
			CountOfnull++;

	for (int a = 0; a < CountOfnull; a++)
		OutputArray[a] = 0;

	for (int a = CountOfnull; a < 7; a++)
		if (arr[a] != 0)
			OutputArray[a] = arr[a];

	std::cout << "The resulting array: "; //Порядок масиву
	for (int i = 0; i < 6; i++)
		std::cout << " " + OutputArray[i];

	return 0;
}