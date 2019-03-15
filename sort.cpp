#include <iostream>

using namespace std;

int main()
{
	int arr[11];
	int max = 0;

	cout << "Please enter 10 integer values" << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	cout << "Executing Stalin Sort" << endl;

	max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		int j = i + 1;

		if (max < arr[i])
		{
			max = arr[i];
		}

		if (max > arr[j])
		{
			arr[j] = 0;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << endl;
		}
	}

	system("pause");

	return 0;
}
