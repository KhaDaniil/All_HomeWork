#include <iostream>
#include <string>
using namespace std;

//Определить день недели по дате

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
string S[7] = { "Восресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
cout << "Введите" << endl;
cout << "День" << endl;
cin >> D;
cout << "Месяц" << endl;
cin >> M;
cout << "Год" << endl;
cin >> Y;
cout << S[ E21( D, M, Y ) ] << endl;
return 0;
}
