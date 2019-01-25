#include <iostream>

using namespace std;

int main(){
	int n;
	int a = 0;
	int g;
	cin >> n;
	int arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> g;
		while (g > 0)
		{
			a++;
			g /= 10;
		}
		arr[a]++;
		a = 0;
	}
	for (int i = 0; i < 100; i++)
		a = max(a, arr[i]);
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == a)
			cout << i << ' ' << arr[i] << endl;
	}
	return 0;
}
