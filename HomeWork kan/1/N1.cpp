#include <iostream>

using namespace std;

/*Напишите программу, вычисляющую сумму нечетных цифр целого числа*/

int main () {
    setlocale(LC_ALL, "Rus");
cout << "Введите число"<< endl;
int a;
cin >> a;
int sum = 0;
int b;
while (a!=0){
if (a%10!=0) {
  b=a%10;
  if (b%2!=0) sum+=b;}
a=a/10;
}
cout << "Cумма нечетныхчисел вашего числа = " << sum;
}

