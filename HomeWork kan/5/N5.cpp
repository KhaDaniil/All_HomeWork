#include <iostream>

using namespace std;

/*�������� ���������, ���������� ��������� ����� �� �� ����� ������� ������� ��������. */

int simple(int a){
    for(int i=2;i<= a/2;i++) if( (a%i)==0 ) return 0;
return 1;
};

int main() {
    setlocale (LC_ALL, "Rus");
cout << "������� �����" << endl;
int a;
cin >> a;
int b = 2;
if (simple(a)){
   cout << "����� �������" << endl;
}
else {cout << "������� �������� ����� :" << endl;
        while (a!=1){
        while (a%b!= 0) {
            b++;
        }
        a=a/b;
        cout << "*"<< " "<< b << endl;

}
  cout << b << " - ���������� ��������";
}
   return 0;
}
