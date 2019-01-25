#include <iostream>
using namespace std;
int main(){
int x;
int y;
int c;
cin >> x;
cin >> y;
cin >> c;
int* D=new int[x - y + 1];
for(int i = 0; i < x - y + 1; i++){
D[i] = 0;
}
D[0] = 1;
for(int i= 0 ; i < x - y + 1 ; i++){
       if((i + y - 5 >= y) && (i + y != c)){
            if(D[i] > 0){
                D[i] = D[i] + D[i - 5];
            }
            else{
        D[i] = D[i - 5];
            }
       }
       if(((i + y) * (i + y) <= x) && (i + y != c)){
             if(D[(i + y) * (i + y) - y] > 0){
                D[(i + y) * (i + y) - y] = D[(i + y) * (i + y) - y] + D[i];
            }
            else{
        D[(i + y) * (i + y) - y] = D[i];
            }
       }
       if(((i + y - 2) / 10 <= x) && (((i + y - 2) % 10) == 0) && (i + y != c)){
             if(D[(i + y - 2) / 10 - y] > 0){
                D[i] = D[(i + y - 2) / 10 - y] + D[i];
            }
            else{
        D[i] = D[(i + y - 2) / 10 - y];
            }
       }
        if(((i + y) % 3 == 0) && ((i + y) / 3 >= y) && (i + y != c)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + y) / 3 - y];
            }
            else{
        D[i] = D[(i + y) / 3 - y];
            }
       }
}
if(D[x - y] == 0){
cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}
