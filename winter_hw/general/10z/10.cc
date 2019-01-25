#include <iostream>
using namespace std;

int main(){
int a = 1;
int x;
int n;
cin>>n;
for(int i = 0; i < n; i++){                          //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
    cin>>x;
    if((x % 3 == 0) && (x % 2 == 1)){
        a = a * x;
    }
}
cout<<a;
return 0;
}
