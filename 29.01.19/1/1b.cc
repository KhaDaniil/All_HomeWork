#include <iostream>
using namespace std;
class double_vector{
    private:
double* data;
unsigned int size;
unsigned int capacity;
    public:
    double eraser(unsigned int n){
        double a = 0;
    if(n <= size){
        a = data[n - 1];
        for(int i = n - 1; i < size - 1; i++){
            data[i] = data[i + 1];
        }
        size--;
    }
    cout << " eraser is working ;";
    return a;
    }
    void erase_ab (unsigned int a, unsigned int b){
        int f = 0;
        if(a == b){
                cout << " eraser failure ;";
            f = 1;
        }
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if((b <= size) && (f != 1)){
            int c = 0;
            cout << " eraser is working ;";
        for(int i = 0; i < size - b + 1; i++){
            cout<<" "<<data[a - 1 + i];
           data[a - 1 + i] = data[b - 1 + i];
    c++;
        }
        for(int i = size - 1 - c; i < size; i++){
            data[i] = 0;
        }
        size = size - c - 1;
        f = 1;
    }
    if(a > size){
        cout << " eraser is working ;";
        f = 1;
    }
    if((a <= size) && (b > size) && (f != 1)){
        cout << " eraser is working ;";
            int c = 0;
        for(int i = a - 1; i < size; i++){
                cout<<" "<<data[i];
            data[i] = 0;
            c++;
        }
        size = size - c;
        f = 1;
    }
    }
 void push_front(double x){
 if(size >= capacity){
            capacity*=2;
            double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            temp[0] = x;
            for(int i = 1; i <= size; i++){
                temp[i] = data[i - 1];
            }
            delete[]data;
            data = temp;
        }
        for(int i = size; i > 0; i--){
            data[i] = data[i - 1];
        }
        data[0] = x;
        size++;
    cout << " push_frnt is working ;";
 }
  double pop_frînt (){
    double a;
    a = data[0];
    for(int i = 0; i < size - 1; i++){
        data[i] = data[i + 1];
    }
    size--;
    cout << " pop_frnt is working ;";
    return a;
    }
    void find(double x){
        int f = 0;
    for(int i = 0; i < size; i++){
        if(data[i] == x){
                cout<<" finder is working ;";
            cout<<" "<<x<<" is in the vector ";
            f = 1;
        }
    }
    if(f == 0){
            cout<<" finder is working ;";
        cout<<" "<<x<<" is not in the vector ";
    }
    }
void resize(unsigned int n){
 if(n > 0){
        capacity = capacity + n;
     double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
        }
 if(n < 0){
    if(capacity - size >= n){
        capacity = capacity + n;
    }
    else{
            int a = n -capacity + size;
        capacity = size;
        cout<<" no more empty positions."<<a<<"positions left hot deleted";
    }
    double* temp = new double[capacity];
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
 }
 }
         unsigned int get_size(){
unsigned int a = size;
cout << " size is working ;";
return a;
}
unsigned int get_capacity(){
unsigned int a = capacity;
cout << " capacity is working ;";
return a;
}
 void print (unsigned int n){
 cout<<data[n - 1];
 cout << " print is working ;";
 }
 ~double_vector(){
 delete[]data;
 cout << " destructor is working ;";
 }
};
int main()
{
   cout << "Just read the code"
}
