/* �������� ���������, ����������� ������������ ����������� �� n �� �.
� ��������� ������ ������������ �����, ����������� �������� ��������. */

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
cout << "������� n" << endl;
cin >> n;
cout << "������� k" << endl;
cin >> k;
if (k > n) cout << "������������ ����������� = " <<  "0";
if (k < 0 || n < 0) cout << "������������ ����������� = " << "0";
if (n >= k) {
cout << "������������ ����������� = " << Bk(n,k);
}
return 0;
}
