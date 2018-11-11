#include <iostream>

using namespace std;

/*Напишите программу, вычисляющую произведение цифр целого числа, чётность которых совпадает с чётностью последней цифры*/

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Введите число" << endl;
    int a;
    cin >> a;
    int sum = 1;
    int b;
    if (a%2==0){
        while (a!=0){
            b=a%10;
            if(b%2== 0){
                sum*=b;
            }
        a=a/10;
        }
    }
    else {
        while (a!=0){
            b=a%10;
            if (b%2!=0){
                sum*=b;
            }
        a=a/10;
        }
    }
cout << "Произведение чисел = " << sum;
}

