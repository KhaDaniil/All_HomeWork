#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int n;
	cin >> n;
	int *arr = new int[n];
	int *Arr = new int[n];
	int j = 0;
	while (b % 3 == 0)
	{
		b = max(arr[j], Arr[j]) - min(arr[j], Arr[j]);
		j++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i] >> Arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		a += max(arr[i], Arr[i]);
		if (((max(arr[i], Arr[i]) - min(arr[i], Arr[i])) < b) && (((max(arr[i], Arr[i]) - min(arr[i], Arr[i])) % 3 != 0)))
			b = max(arr[i], Arr[i]) - min(arr[i], Arr[i]);
	}
	if (a % 3 == 0)
		a -= b;
	if (a % 3 == 0)
		cout << '0';
	else
		cout << a;
	delete[] arr;
	delete[] Arr;
	return 0;
}
