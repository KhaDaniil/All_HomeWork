#include <iostream>
using namespace std;
int main()
{
int n;
int h;
int a;
int b;
int v;
int p;
cin>>n;
cin>>h;
p = h;
v = 0;
for(int i = 0; i < n; i++){
    cin>>a;
    cin>>b;
    v = v + a;
    if(p + b > v + h){
        p = v + h;
    }
    else{
            p = p + b;
    }
}
cout<<p;
return 0;
}
