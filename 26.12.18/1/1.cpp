#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int World(int *arr, int left, int right, int k)
{
	int x;
	int i = left;
	int j = right;
	int mid;
	while (true)
	{
		mid = ((left + right) - (left + right) % 2) / 2;
		while (mid >= arr[i])
			i++;
		while (mid <= arr[j])
			j++;
		if (arr[i] < arr[j])
		{
			x = arr[i];
			arr[i] = arr[j];
			arr[j] = x;
		}
		if (i > j)
			break;
	}

	if (k == mid)
		return arr[mid];
	if (right - left < 4)
		return(arr[k]);
	else
		{
	if (k < mid)
		World(arr, left, mid, k);

	if (k > mid)
		World(arr, mid, right, k);
		}
}
int main()
{
	int n;
	cin >> n;
	cout << endl;
	int *Arr1 = new int[n];
	for (int v = 0; v < n; v++)
		cin >> Arr1[v];
		cout << endl;
		int K;
		cin >> K;

	cout << World(Arr1, 0, n-1, K);
	system("pause");
		return 0;
}
