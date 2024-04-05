#include <iostream>
using namespace std;

int arr[20]; //array to searched
int n;       //number of elements in the array
int i;       //index of array element

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array:";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
	}
}