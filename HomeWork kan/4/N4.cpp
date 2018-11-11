#include <iostream>
using namespace std;

/*Напишите программу, находящую сумму простых элементов массива. */

int simple(int a){
    for(int i=2;i<= a/2;i++) if( (a%i)==0 ) return 0;
return 1;
};

int main () {
    setlocale (LC_ALL, "RUS");
unsigned int N;
int sum = 0;
cout << "Введите величину массива" << endl;
cin >> N;
cout << "Введите элементы массива" << endl;
int *Arr = new int [N];
for (int i = 0; i < N; i++){
    cin >> Arr[i];
    if (simple(Arr [i])) sum+= Arr [i];
}
 cout << "Сумма простых чисел массива = " << sum;
 delete &Arr;
 return 0;
}
