#include <iostream>
#include <string>
using namespace std;

//���������� ���� ������ �� ����

struct Date {
int Day;
int Month;
int Year;

};

 int E21( int &Day,  int &Month, int &Year ) {
    int a, y, m, R; a = ( 14 - Month ) / 12;
     y = Year - a; m = Month + 12 * a - 2;
    R = 7000 + ( Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12 );
    return R % 7;
}
int main() {
setlocale (LC_ALL, "Rus");
int D, M, Y;
string S[7] = { "����������", "�����������", "�������", "�����", "�������", "�������", "�������" };
cout << "�������" << endl;
cout << "����" << endl;
cin >> D;
cout << "�����" << endl;
cin >> M;
cout << "���" << endl;
cin >> Y;
cout << S[ E21( D, M, Y ) ] << endl;
return 0;
}
