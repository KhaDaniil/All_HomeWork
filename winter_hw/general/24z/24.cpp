#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int *arr = new int[n];
	int a = 0;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] + arr[j]) % 9 == 0)
				a++;
		}
	}
}
cout << a;
delete[] arr;
return 0;
}
