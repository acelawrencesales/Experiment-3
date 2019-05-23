#include <iostream>

using namespace std;

int main()
{
	int size;
	
	cout << "Enter size of array : "; cin >> size;
	
	char array[size];
	int x, y, a;
	
	cout << "Enter components : " << "\n";
	for (x = 0; x < size; x++)
	{
		cin >> array[x];
	}
	
	for (x = 0; x < size; x++)
	{
		for (y = x + 1; y < size; y++)
		{
			if (array[x] > array[y])
			{
				a = array[x];
				array[x] = array[y];
				array[y] = a;
			}
		}
	}
	
	cout << "In reverse order : ";
	for (x = 0; x < size; x++)
	{
		cout << array[x];
	}
	
	return 0;
}
