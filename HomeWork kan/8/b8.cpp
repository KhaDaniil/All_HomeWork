#include <iostream>
using namespace std;

/*�������� ��� �������, ��������� ������������ �������� ����������� � ����������� �����.
 � ��������� �� ������ �������������� �������������� ����������.*/

int k2 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "���������� ������ = 0" << endl;
    }
    if (a == 1) {
    cout << "���������� ������ = 1" << endl;
    }
        float b = 0;
while (b < a) {
   float c = b * b;
    if (c == a) {
        cout << "���������� ������ ����� " << a << " - " << b << endl;
        return 0;
    }
    if (c > a) {
         float m = b - 1;
         while (m < b) {
                float r = m * m;
                if (r == a) {
                cout << "���������� ������ ����� " << a << " - " << m << endl;
                return 0;
                }
                if (r > a){
                        /*cout << "������ ����� " << a << " - " << m - 0.1 << endl;
                return 0;*/
                float n = m - 0.1;
                while (n < m) {
                    float x = n * n;
                    if (x == a) {
                            cout << "���������� ������ ����� " << a << " - " << n << endl;
                return 0;
                        }
                        if (x > a) {
                           /* cout << "������ ����� " << a << " - " << n - 0.01 << endl;
                return 0;*/
                float y = n - 0.01;
                while (y < n ) {
                    float v = y * y;
                    if (v == a) {
                        cout << "���������� ������ ����� " << a << " - " << y << endl;
                return 0;
                    }
                    if (v > a) {
                        cout << "���������� ������ ����� " << a << " ~ " << y - 0.001 << endl;
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
    cout << "������ ������ ������� = 0" << endl;
    }
        if (a == 1) {
    cout << "���������� ������ = 1" << endl;
    }
        float b=0;
while (b < a) {
   float c = b * b * b;
    if (c == a) {
        cout << "������ ������ ������� ����� " << a << " - " << b << endl;
        return 0;
    }
    if (c > a) {
         float m = b - 1;
         while (m < b) {
                float r = m * m * m;
                if (r == a) {
                cout << "������ ������ ������� ����� " << a << " - " << m << endl;
                return 0;
                }
                if (r > a){
                        /*cout << "������ ����� " << a << " - " << m - 0.1 << endl;
                return 0;*/
                float n = m - 0.1;
                while (n < m) {
                    float x = n * n * n;
                    if (x == a) {
                            cout << "������ ������ ������� ����� " << a << " - " << n << endl;
                return 0;
                        }
                        if (x > a) {
                           /* cout << "������ ����� " << a << " - " << n - 0.01 << endl;
                return 0;*/
                float y = n - 0.01;
                while (y < n ) {
                    float v = y * y * y;
                    if (v == a) {
                        cout << "������ ������ ������� ����� " << a << " - " << y << endl;
                return 0;
                    }
                    if (v > a) {
                        cout << "������ ������ ������� ����� " << a << " ~ " << y - 0.001 << endl;
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
    cout << "������� �����" << endl;
    float a;
    cin >> a;
    while (a < 0){
    cout << "������. ������� ������������� �����" << endl;
    cin >> a;
    }
    k2(a);
    k3(a);
    return 0;
    }
