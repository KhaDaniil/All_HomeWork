#include <iostream>
using namespace std;

/*�������� ��� �������, ��������� ������������ �������� ����������� � ����������� �����.
 � ��������� �� ������ �������������� �������������� ����������.*/

int kor2 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "���������� ������ = 0" << endl;
    }
    if (a == 1) {
    cout << "���������� ������ = 1" << endl;
    }
        float b=0;
        while (b<=a) {
             float c = b * b;
    if (c == a) {
        cout << "������ ����� " << a << " - " << b << endl;
        return 0;
    }
     if (c > a) {
        cout << "������ ����� " << a << " - " << b - 0.00001 << endl;
        return 0;
    }

       b= b + 0.00001;
        }
}

int kor3 (float a) {
    setlocale (LC_ALL, "Rus");
if (a == 0) {
    cout << "������ ������ ������� = 0" << endl;
    }
    if (a == 1) {
    cout << "������ ������ ������� = 1" << endl;
    }
        float b=0;
        while (b<=a) {
             float c = b * b * b;
    if (c == a) {
        cout << "������ ������ ������� ����� " << a << " - " << b << endl;
        return 0;
    }
     if (c > a) {
        cout << "������ ������ ������� " << a << " - " << b - 0.00001 << endl;
        return 0;
    }

       b= b + 0.00001;
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
    kor2(a);
    kor3(a);
    return 0;
    }


