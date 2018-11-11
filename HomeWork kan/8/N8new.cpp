#include <iostream>
using namespace std;

/*Напишите две функции, находящие приближенное значение квадратного и кубического корня.
 В программе не должны использоваться математические библиотеки.*/

int kor2 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "Квадратный корень = 0" << endl;
    }
    if (a == 1) {
    cout << "Квадратный корень = 1" << endl;
    }
        float b=0;
        while (b<=a) {
             float c = b * b;
    if (c == a) {
        cout << "Корень числа " << a << " - " << b << endl;
        return 0;
    }
     if (c > a) {
        cout << "Корень числа " << a << " - " << b - 0.00001 << endl;
        return 0;
    }

       b= b + 0.00001;
        }
}

int kor3 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "Корень третей степени = 0" << endl;
    }
    if (a == 1) {
    cout << "Корень третей степени = 1" << endl;
    }
        float b=0;
        while (b<=a) {
             float c = b * b * b;
    if (c == a) {
        cout << "Корень третей степени числа " << a << " - " << b << endl;
        return 0;
    }
     if (c > a) {
        cout << "Корень третей степени " << a << " - " << b - 0.00001 << endl;
        return 0;
    }

       b= b + 0.00001;
        }
}

 int main () {
    setlocale (LC_ALL, "Rus");
    cout << "Введите число" << endl;
    float a;
    cin >> a;
    while (a < 0){
    cout << "Ошибка. Введите положительное число" << endl;
    cin >> a;
    }
    kor2(a);
    kor3(a);
    return 0;
    }


