#include <iostream>

using namespace std;

/*Напишите две функции, находящие приближенное значение квадратного и кубического корня.
 В программе не должны использоваться математические библиотеки.*/


int main () {
    setlocale (LC_ALL, "Rus");
    cout << "Введите число" << endl;
float n;
cin >> n;

float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, k2 = 0;
float i;
for (i = 0; i*i < n; i++){
}
if (i*i == n)
a = i;
else{
a = i - 1;
for (i = 0 ; (a + i/10)*(a + i/10) < n; i++){
}
b = (i - 1)/10;
for (i = 0; (a + b + i/100)*(a + b + i/100) < n; i++){
}
c = (i - 1)/100;
for (i = 0; (a + b + c + i/1000)*(a + b + c + i/1000)< n; i++){
}
d = (i - 1)/1000;
}
for (i = 0; (a + b + c + d + i/10000)*(a + b + c + d + i/10000)< n; i++){
}
e = (i - 1)/10000;
for (i = 0; (a + b + c + d + e + i/100000)*(a + b + c + d + e + i/100000)< n; i++){
}
f = (i - 1)/1000;
k2 = a + b + c + d + e + f - 0.0089;

float x = 0, y = 0, m = 0, t = 0, v = 0, g = 0, k3 = 0;
for (i = 0; i*i*i < n; i++){
}
if (i*i*i == n)
x = i;
else{
x = i - 1;
for (i = 0 ; (x + i/10)*(x + i/10)*(x + i/10) < n; i++){
}
y = (i - 1)/10;
for (i = 0; (x + y + i/100)*(x + y + i/100)*(x + y + i/100)< n; i++){
}
m = (i - 1)/100;
for (i = 0; (x + y + m + i/1000)*(x + y + m + i/1000)*(x + y + m + i/1000) < n; i++){
}
n = (i - 1)/1000;
for (i = 0; (x + y + m + t + i/10000)*(x + y + m + v + i/10000)*(x + y + m + t + i/10000) < n; i++){
}
v = (i - 1)/10000;
for (i = 0; (x + y + m + t + g + i/100000)*(x + y + m + t + g + i/100000)*(x + y + m + t + g + i/100000) < n; i++){
}
g = (i - 1)/100000;
}

k3 = x + y + m + n + v + g;
k3 = k3/10 ;
cout << k2 << endl;
cout << k3 << endl;
return 0;
}
