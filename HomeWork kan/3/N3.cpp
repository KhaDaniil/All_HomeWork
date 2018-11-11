/* Напишите программу, вычисляющую биномиальный коэффициент из n по к.
В программе нельзя использовать числа, превышающие итоговое значение. */

#include <iostream>
using namespace std;

unsigned int Bk (unsigned int a, unsigned int b) {

if (b == 0 || a == b) return 1;

else {
return Bk(a-1,b-1)+ Bk(a-1,b);
}

}

int main() {
setlocale (LC_ALL, "Rus");
unsigned int n, k;
cout << "Введите n" << endl;
cin >> n;
cout << "Введите k" << endl;
cin >> k;
if (k > n) cout << "Биномиальный коэффициент = " <<  "0";
if (k < 0 || n < 0) cout << "Биномиальный коэффициент = " << "0";
if (n >= k) {
cout << "Биномиальный коэффициент = " << Bk(n,k);
}
return 0;
}
