#include <iostream>
using namespace std;

struct intarray
{
	int n;
	int * A;
	int k;
	intarray(int a) : n(a), A(new int[a])
	{}

	intarray(const intarray & c)
	{
		n = c.n;
		A = new int[n];
		for (int i = 0; i < n; i++)
		{
			A[i] = c.A[i];
		}
	}

	intarray& operator= (intarray c)
	{
		A = new int[n];
		for (int i = 0; i < n; i++)
		{
			A[i] = c.A[i];
		}
	}

		void otk(){
        int b, m, d, s;
		for(int i = 0; i < n; i++){
            b = A[i];
while (b != 0) {
m = b % 10;
b = (b - m) / 10;
d = d + 1;
}
b = A[i];
s = 1;
for(int j = 0; j < d; j++){
    m = b % 10;
b = (b - m) / 10;
if(m != 0){
s = s * m;
}
}
if(s > k){
    cout<<" "<<A[i]<<" ";
}
s = 0;
m = 0;
b = 0;
d = 0;
		}
		}

};

int main()
{
	int a;
	cin >> a;
	intarray b(a);
	for (int i = 0; i < b.n; i++)
	{
		cin >> b.A[i];
	}
	cin>>b.k;
	b.otk();
	return 0;
}
