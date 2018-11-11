#include <iostream>
using namespace std;

/* Напишите программу, выписывающую все элементы последовательности, имеющие не менее пяти делителей */

int main(){
 setlocale (LC_ALL, "Rus");
 cout << "Введите размер массива" << endl;
int n;
cin >> n;
int *Arr = new int[n];
cout << "Введите элементы массива" << endl;

for (int i = 0; i < n; i++){
int k = 0;
cin >> Arr [i];

int q = Arr [i];
for (int a = 1; a <= Arr [i]; a++){
if ((q % a) == 0) k += 1;
}
if (k >= 5) cout << Arr [i] << " - имеет не менее 5 делителей" << endl;
}
return 0;
}
