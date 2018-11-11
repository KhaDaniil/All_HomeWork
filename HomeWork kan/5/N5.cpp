#include <iostream>

using namespace std;

/*Напишите программу, заменяющую составные числа на их самые большие простые делители. */

int simple(int a){
    for(int i=2;i<= a/2;i++) if( (a%i)==0 ) return 0;
return 1;
};

int main() {
    setlocale (LC_ALL, "Rus");
cout << "Введите число" << endl;
int a;
cin >> a;
int b = 2;
if (simple(a)){
   cout << "Число простое" << endl;
}
else {cout << "Простые делители числа :" << endl;
        while (a!=1){
        while (a%b!= 0) {
            b++;
        }
        a=a/b;
        cout << "*"<< " "<< b << endl;

}
  cout << b << " - Наибольший делитель";
}
   return 0;
}
