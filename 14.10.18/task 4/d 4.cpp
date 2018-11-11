#include <iostream>

using namespace std;
/*Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе)*/


int main () {
    unsigned int N ;
    int sum = 0;
    cin >> N;
    int *Arr = new int [N];
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
        if ((Arr [i] % 27==0 || Arr[i] % 72 == 0) && (Arr[i] % 216 != 0)) {
        sum+= Arr[i];
        }
        }
delete &Arr;
cout << sum;
return 0;
}
