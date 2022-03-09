#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	int size, sum;
	int* arr, * tmp;

	cout << "intoduceti marimea: ";
	cin >> size;

	arr = new int[size];
	tmp = new int[size];
	sum = 0;

	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i + 1 << "]: ";
		cin >> arr[i];
		tmp[i] = -1;
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		if (!(sum % size))
		{
			for (int j = 0; j <= i; j++)
			{
				cout << arr[j] << " ";
			}
			cout << endl;
			break;
		}
		else if (tmp[sum % size] >= 0)
		{
			for (int j = tmp[sum % size] + 1; j <= i; j++)
			{
				cout << arr[j] << " ";
			}
			cout << endl;
			break;
		}
		tmp[sum % size] = i;
	}
	delete[] arr;
	delete[] tmp;





	return 0;
}
