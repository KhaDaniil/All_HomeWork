#include <iostream>

using namespace std;

int main (){
    setlocale (LC_ALL, "Rus");
cout << "¬ведите размер массива" << endl;
int n;
cin >> n;
int *Arr = new int[n];
int r = 0;
cout << "¬ведите элементы массива" << endl;
for (int i = 0; i < n; i++){
cin >> Arr [i];
if (Arr [i] % 2 != 0 ){
    r++;
}
}
int *Frr = new int [r];
for (int a = 0;  a < n; a++){
    int k = 0;
    int z = Arr [a];
        if (z % 2 != 0){
            Frr [k] = z;
            cout << Frr [k] << " ";
            k++;
        }
}
}




