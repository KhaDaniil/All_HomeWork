#include <iostream>
using namespace std;

/*Напишите две функции, находящие приближенное значение квадратного и кубического корня.
 В программе не должны использоваться математические библиотеки.*/

int k2 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "Квадратный корень = 0" << endl;
    }
    if (a == 1) {
    cout << "Квадратный корень = 1" << endl;
    }
        float b = 0;
while (b < a) {
   float c = b * b;
    if (c == a) {
        cout << "Квадратный корень числа " << a << " - " << b << endl;
        return 0;
    }
    if (c > a) {
         float m = b - 1;
         while (m < b) {
                float r = m * m;
                if (r == a) {
                cout << "Квадратный корень числа " << a << " - " << m << endl;
                return 0;
                }
                if (r > a){
                        /*cout << "Корень числа " << a << " - " << m - 0.1 << endl;
                return 0;*/
                float n = m - 0.1;
                while (n < m) {
                    float x = n * n;
                    if (x == a) {
                            cout << "Квадратный корень числа " << a << " - " << n << endl;
                return 0;
                        }
                        if (x > a) {
                           /* cout << "Корень числа " << a << " - " << n - 0.01 << endl;
                return 0;*/
                float y = n - 0.01;
                while (y < n ) {
                    float v = y * y;
                    if (v == a) {
                        cout << "Квадратный корень числа " << a << " - " << y << endl;
                return 0;
                    }
                    if (v > a) {
                        cout << "Квадратный корень числа " << a << " ~ " << y - 0.001 << endl;
                return 0;
                    }
                    y = y + 0.001;
                    }
                    }
                n = n + 0.01;
                }
                }
        m = m + 0.1;
        }
        }
     b++;
    }
    }

int  k3(float a) {
setlocale (LC_ALL, "Rus");
a= a + 0.0;

if (a == 0) {
    cout << "Корень третей степени = 0" << endl;
    }
        if (a == 1) {
    cout << "Квадратный корень = 1" << endl;
    }
        float b=0;
while (b < a) {
   float c = b * b * b;
    if (c == a) {
        cout << "Корень третей степени числа " << a << " - " << b << endl;
        return 0;
    }
    if (c > a) {
         float m = b - 1;
         while (m < b) {
                float r = m * m * m;
                if (r == a) {
                cout << "Корень третей степени числа " << a << " - " << m << endl;
                return 0;
                }
                if (r > a){
                        /*cout << "Корень числа " << a << " - " << m - 0.1 << endl;
                return 0;*/
                float n = m - 0.1;
                while (n < m) {
                    float x = n * n * n;
                    if (x == a) {
                            cout << "Корень третей степени числа " << a << " - " << n << endl;
                return 0;
                        }
                        if (x > a) {
                           /* cout << "Корень числа " << a << " - " << n - 0.01 << endl;
                return 0;*/
                float y = n - 0.01;
                while (y < n ) {
                    float v = y * y * y;
                    if (v == a) {
                        cout << "Корень третей степени числа " << a << " - " << y << endl;
                return 0;
                    }
                    if (v > a) {
                        cout << "Корень третей степени числа " << a << " ~ " << y - 0.001 << endl;
                return 0;
                    }
                    y = y + 0.001;
                    }
                    }
                n = n + 0.01;
                }
                }
        m = m + 0.1;
        }
        }
     b++;
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
    k2(a);
    k3(a);
    return 0;
    }
