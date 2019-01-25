#include <iostream>
using namespace std;
int main(){
int pr;
int y;
int a;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
a = x[0];
cin>>y;
pr = a * y;
x[0] = y;
for(int i = 6; i < n; i++){
    cin>>y;
    if(x[i % 5] < a){
        a = x[i % 5];
    }
    if(pr > a * y){
        pr = a * y;
    }
    x[i % 5] = y;
}
cout<<pr;
return 0;
}
