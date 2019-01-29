#include <iostream>
using namespace std;
class double_vector{
    private:
double* data;
unsigned int size;
unsigned int capacity;
    public:
    double_vector(){
    data = new double[1];
    size = 0;
    capacity = 1;
    data[0] = 0;
    }
    double_vector(unsigned int n){
    data = new double[n];
    size = 0;
    capacity = n;
    for(int i = 0; i < n; i++){
        data[i] = 0;
    }
    }
    double_vector(double* a, unsigned int m){
    delete[]data;
    data = a;
    size = m;
    capacity = m;
    }
    double_vector(const double_vector& a){
    double* T = new double[a.capacity];
    for(int i = 0; i < a.capacity; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    capacity = a.capacity;
    data = T;
    cout << " Copying Constructor is working ;" << endl;
    }
    const double_vector& operator= (const double_vector& a){
         double* T = new double[a.capacity];
        for(int i = 0; i < a.capacity; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    capacity = a.capacity;
    delete[]data;
    data = T;
      cout << " operator = is working ;" << endl;
    return *this;
    }
    void push_bak(int x){
        if(size >= capacity){
            capacity*=2;
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
        data[size] = x;
        size++;
    cout << " push_bak is working ;" << endl;
    }
    double pop_bak(){
    double a;
    a = data[size];
    data[size] = 0;
    size--;
    cout << " pop_bañk is working ;" << endl;
    return a;
    }

    double operator[] (unsigned int n){
        cout << " operator [] is working ;" << endl;
 return data[n -1];
 }
 void print (unsigned int n){
 cout<<data[n - 1];
 cout << " print is working ;" << endl;
 }
 void push_frnt(double x){
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
    cout << " push_frnt is working ;" << endl;
 }
  double pop_frnt(){
    double a;
    a = data[0];
    for(int i = 0; i < size - 1; i++){
        data[i] = data[i + 1];
    }
    size--;
    cout << " pop_front is working ;" << endl;
    return a;
    }
 ~double_vector(){
 delete[]data;
 cout << " destructor is working ;" << endl;
 }
};
int main()
{
    double a = 10, b;
    unsigned int n = 10;
    double* j = new double[6];
    for(int i = 0; i < 6; i++){
        j[i] = i;
    }
double_vector p(n);
double_vector g(j,6);
p.print(n - 3);
a = p.pop_bak();
g.print(1);
for(int i = 0; i < 4; i++){
g.push_frnt(3);
}
g.print(n - 6);
p = g;
p.print(2);
cout<<" "<<a;
b = g.pop_frnt();
cout<<" "<<b;
return 0;
}
