#include <iostream>
using namespace std;
int main(){
int n;
int d;
int k;
int x;
int y;
int v;
cin>>n;
int* g = new int[100];
for(int i = 0; i < 100; i++){         //this takes O(n) because this time is needed to create an array of one hundred elements and to fill it and to complete n steps of a cycle, when each step takes the same static time and to complete 99 steps of a cycle, when each step takes the same static time..
    g[i] = 0;
}
for(int i = 0; i < n; i++){
    cin>>d;
    cin>>k;
    v = k % d;
    g[v]++;
}
x = 0;
for(int i = 1; i < 100; i++){
    if(x <= g[i]){
        x = g[i];
        y = i;
    }
}
if(x == 0){
    y = 0;
}
cout<<y;
return 0;
}
