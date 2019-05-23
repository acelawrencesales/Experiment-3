#include <iostream>
#include <iomanip>

using namespace std;

int main ()

{
	int num[10];
	int x, y, z;
	float sum, avg, larInt, smlInt;
	
	sum = 0;
	for (x = 0; x < 10; x++)
	{
		cin >>  num[x];
	}
	sum = num[0] + num[1] +  num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];
	avg = sum / 10;
	
	cout << "The sum of the components is : " << sum << "\n";
	cout << "The average of the components is : " << avg << "\n";
	
	
	for (x = 0; x < 10; x++)
	{
		if (num[z] < num[x])
		z = x;
	larInt = num[z];
	}
	
	for (x = 0; x < 10; x++)
	{
		if (num[z] > num[x])
		z = x;
	smlInt = num[z];
	}
	
	cout << "The largest integer : " << larInt << "\n";
	cout << "The smallest integer : " << smlInt;
	return 0;
}
