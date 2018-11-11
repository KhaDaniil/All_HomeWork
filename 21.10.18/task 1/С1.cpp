#include <Math.h>
#include <iostream>

using namespace std;

unsigned int abs(int a) {
if (a < 0) return -a;
return a;
}

struct rational {
int chisl;
unsigned int znam;
rational (int a = 0,int b = 1) {
if (b < 0) {
a = -a;
b = -b;
}
chisl = a / gcd(abs(a),b);
znam = b / gcd (abs(a),b);
}

rational & operator += (rational &a) {
chisl= chisl * a.znam + a.chisl * znam;
znam = a.znam * znam;
int d = gcd(abs(chisl), znam);
chisl /= d;
znam/= d;
return *this;
}
rational & operator -= (rational &a) {
chisl = chisl * a.znam - a.chisl * znam;
znam = a.znam * znam;
int d = gcd(abs(chisl), znam);
chisl /= d;
znam /= d;
return *this;
}
rational & operator *= (rational &a) {
chisl *= a.chisl;
znam *= a.znam;
int d = gcd(abs(chisl), znam);
chisl /= d;
znam /= d;
return *this;
}
rational & operator /= (rational &a) {
int zn = a.znam, ch = a.chisl;
if (a.chisl < 0) {
ch = - ch;
zn = -zn;
}
chisl *= zn;
znam *= ch;
int d = gcd(abs(chisl), znam);
chisl /= d;
znam /= d;
return *this;
}

rational operator = (const rational &b) {
chisl = b.chisl;
znam = b.znam;
return *this;
}

int gcd(int a, int b) {
if (a%b == 0) return b;
return gcd(b, a % b);
}

unsigned int abs(int a) {
if (a < 0) return -a;
return a;}
};

rational& operator + (rational a,rational &b) {
return a += b;
}
rational& operator - (rational a, rational& b) {
return a -= b;
}
rational& operator * (rational a, rational &b) {
return a *= b;
}
rational& operator / (rational a, rational& b) {
return a /= b;
}

const bool & operator == (const rational& a, const rational& b) {
return (a.chisl * b.znam == a.znam * b.chisl);
}
const bool & operator > (const rational& a, const rational& b) {
return (a.chisl + 0.0/ a.znam > b.chisl +0.0 / b.znam);
}
const bool & operator < (const rational& a, const rational& b) {
return (a.chisl + 0.0 / a.znam < b.chisl + 0.0/ b.znam);
}
const bool & operator >= (const rational& a, const rational& b) {
return !(a < b);
}
const bool & operator <= (const rational& a, const rational& b) {
return !(a>b);
}
const bool & operator != (const rational& a, const rational& b) {
return !(a==b);
}
ostream & operator << (ostream &os,rational &b) {
os << b.chisl << '/' << b.znam;
return os;
}
istream & operator >> (istream &os, rational &b) {
char slash = '0';
int znam1;
os >> b.chisl;
cin >> slash;
if (slash != '/') return os;
os >> znam1;
b.znam = znam1;

if (znam1 < 0) {
b.chisl = -b.chisl;
b.znam = -znam1;
}
int d = b.gcd(abs(b.chisl), b.znam);
b.chisl /= d;
b.znam /= d;
return os;
}


void swap(rational& a, rational& b) {
rational copy = a;
a = b;
b = copy;
}

rational ss(rational a, rational b) {
rational c = 2;
return (a + b) / c;
}

int main()
{
setlocale(LC_ALL, "Rus");
cout << "Введите 2  рациональных числа ввиде дроби a/b" << endl;
rational a, b;
cin >> a >> b;
rational sum = a + b, raz = a - b, pr = a * b, cha = a / b, SS = ss(a,b);
cout << "Вы ввели первое число = " << a << endl;
cout << "Вы ввели второе число = " << b << endl;
cout << "Сумма чисел = " << sum << endl;
cout << "Разность чисел = " << raz << endl;
cout << "Произведение чисел = " << pr << endl;
cout << "Частное чисел = " << cha << endl;
if (a>b) cout << "Первое больше" << a << "<" << b << endl;
else if (a < b) cout << "Второе больше" << a << ">" << b << endl;
else if (a==b) cout << "Числа равны" << endl;
swap(a, b);
cout << "Пример пользовательской функции swap(меняет значения по кругу):Первое число =" << a << " Второе =" << b << endl;
cout <<"Пример пользовательской функции ss(среднее арифм) = " << SS << endl;

//system ("pause")
return 0;
}
