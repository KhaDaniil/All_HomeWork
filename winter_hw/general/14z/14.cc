#include <iostream>
using namespace std;
int main(){
int sum = 0;
int y;
int a = 0;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
cin>>x[i];
}
for(int i = 5; i < n; i++){
    cin>>y;
    if(x[i % 5] > a){
        a = x[i % 5];
    }
    if(sum < a + y){
        sum  = a + y;
    }
    x[i % 5] = y;
}
cout<<sum;
return 0;
}
