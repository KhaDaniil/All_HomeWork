// ����������� ���������� ���� �� ������ ����
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int last (int day, int month, int year) {
    int d;
	if (month < 3)
	d = (month - 1)*31 + day;
	else if (month < 8)
	d = 59 + (month - 3)*31 - (month - 3)/2 + day;
	else
	d = 212 + (month - 8)*31 - (month - 8)/2 + day;
    int fin;
	if ((((year%4 == 0) && !(year%100 == 0)) || (year%400 == 0)) && (month < 3))
	fin = 366 - d;
	else
	fin = 365 - d;
	cout << fin << " ���� ��������";
}


int main () {
    setlocale (LC_ALL, "Rus");
    int fin;
    int d,  m,  y;
	cout << "������� ����" << endl;
	cout << "����" << endl;
	cin >> d;
	cout << "�����" << endl;
	cin >> m;
	cout << "���" << endl;
	cin >> y;
    last (d, m, y);
	return 0;
}
