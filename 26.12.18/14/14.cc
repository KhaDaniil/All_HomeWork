#include <iostream>

using namespace std;

int main()
{
int n;
cin >> n;
int* D=new int[n + 1];
D[0] = 0;
int T;
for(int i=1; i<n+1; i++){
        T = D[i - 1] + 1;
        for(int j = 2; j*j < i + 1; j++){
            if( T > D[i - j*j] + 1){
                T = D[i - j*j] + 1;
            }
        }
        D[i] = T;
}
cout << D[n];
return 0;
}
