#include <iostream>

using namespace std;

/*�������� ���������, ����������� ������������ ���� ������ �����, �������� ������� ��������� � ��������� ��������� �����*/

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "������� �����" << endl;
    int a;
    cin >> a;
    int sum = 1;
    int b;
    if (a%2==0){
        while (a!=0){
            b=a%10;
            if(b%2== 0){
                sum*=b;
            }
        a=a/10;
        }
    }
    else {
        while (a!=0){
            b=a%10;
            if (b%2!=0){
                sum*=b;
            }
        a=a/10;
        }
    }
cout << "������������ ����� = " << sum;
}

