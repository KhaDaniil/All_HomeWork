//Дописывание к элементу массива справа его квадрата
#include <iostream>

using namespace std;

int main () {
    setlocale (LC_ALL, "Rus");
	int n;
	cout << "Введите размер массива" << endl;
	cin >> n;
	cout << "Введите элеиенты массива" << endl;
	int *ar = new int [n];
	for (int i = 0; i < n; i++){
		cin >> ar[i];
	}
	int j = 0;
	int *arr = new int [2*n];
	for (int i = 0; i < 2*n; i++){
		arr[i] = ar[j];
		i++;
		arr[i] = ar[j]*ar[j];
		j++;
	}
	delete [ ] ar;
	for (int i = 0; i < 2*n; i++){
		cout << arr[i] << ' ';
	}

	delete [ ] arr;
	return 0;
}
