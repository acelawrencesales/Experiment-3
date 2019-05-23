#include <iostream>

using namespace std;

int main()

{
	int tempa[7], tempb[7], tempc[7];
	int x;
	
	
	for (x = 1; x < 8; x++)
	{
	cout << "Province A, Day " << x << ": ";
	cin >> tempa[x];
	}
	
	for (x = 1; x < 8; x++)
	{
	cout << "Province B, Day " << x << ": ";
	cin >> tempb[x];
	}
	
	for (x = 1; x < 8; x++)
	{
	cout << "Province C, Day " << x << ": ";
	cin >> tempc[x];
	}
	
	cout << "\n" "\n";
	
	for (x = 1; x < 8; x++)
	{
	cout << "Province A, Day " << x << ": " << tempa[x] << "\n";
	}
	
	
	for (x = 1; x < 8; x++)
	{
	cout << "Province B, Day " << x << ": " << tempb[x] << "\n";
	}
	

	for (x = 1; x < 8; x++)
	{
	cout << "Province C, Day " << x << ": " << tempc[x] << "\n";
	}
	
	
	return 0;
}
