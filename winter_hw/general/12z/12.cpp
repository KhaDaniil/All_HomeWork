#include <iostream>
using namespace std;

int main()
{
	int sum;
	int y;
	int m;
	int *arr = new int[5];
	int n;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	m = arr[0];
	cin >> y;
	sum = m + y;
	arr[0] = y;
	for (int i = 6; i < n; i++)
	{
		cin >> y;
		if (arr[i % 5] < m)
		{
			m = arr[i % 5];
		}
		if (sum > m + y)
		{
			sum = m + y;
		}
		arr[i % 5] = y;
	}
	cout << sum;
	delete[] arr;
	return 0;
}
