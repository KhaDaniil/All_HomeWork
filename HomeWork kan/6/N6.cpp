#include <iostream>
using namespace std;

/* �������� ���������, ������������ ��� �������� ������������������, ������� �� ����� ���� ��������� */

int main(){
 setlocale (LC_ALL, "Rus");
 cout << "������� ������ �������" << endl;
int n;
cin >> n;
int *Arr = new int[n];
cout << "������� �������� �������" << endl;

for (int i = 0; i < n; i++){
int k = 0;
cin >> Arr [i];

int q = Arr [i];
for (int a = 1; a <= Arr [i]; a++){
if ((q % a) == 0) k += 1;
}
if (k >= 5) cout << Arr [i] << " - ����� �� ����� 5 ���������" << endl;
}
return 0;
}
