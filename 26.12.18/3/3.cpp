#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    cin >> n;
    int m,l; // Numbers
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == m)
        j++;
        if(arr[i] == l)
        j++;
    }
    if(j >= 2)
    cout << "true";
    else
    cout << "false";
return 0;
}
