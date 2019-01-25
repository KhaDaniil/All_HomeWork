#include <iostream>
using namespace std;

int main(){
int x;
int y;
cin >> x;
cin >> y;
int* D=new int[x - y + 1];
for(int i = 0; i < x - y + 1; i++){
D[i] = 0;
}
D[0] = 1;
for(int i = 1 ; i < x - y + 1 ; i++){
       if(i + y - 1 >= y){
            if(D[i] > 0){
                D[i] = D[i] + D[i - 1];
            }
            else{
        D[i] = D[i - 1];
            }
       }
       if(((i + y)% 2 == 0) && ((i + y)/ 2 >= y)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + y)/ 2 - y];
            }
            else{
        D[i] = D[(i + y)/ 2 - y];
            }
       }
        if(((i + y) % 3 == 0) && ((i + y) / 3 >= y)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + y) / 3 - y];
            }
            else{
        D[i] = D[(i + y) / 3 - y];
            }
       }
}
cout<<D[x - y];
return 0;
}
