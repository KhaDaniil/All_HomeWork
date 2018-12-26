#include <iostream>

using namespace std;


int main()
{
    int M;
    cout << "Backpack max weight = ";
    cin >> M;
    int N;
    cin >> N;
    int *m = new int[N];
    int *p = new int[N];
    double *w = new double[N];
    for(int i = 0; i < N; i++)
    {
        cout << "weight: "; cin >> m[i];
        cout << "price: "; cin >> p[i];
        w[i] = m[i] / p[i];
    }

    double max = w[0];
    int j = 0;
    for(int i = 1; i < N; i++)
    {
        if(max < w[i])
        {
            max = w[i];
            j = i;
        }
    }

    double W = M / m[j];
    cout << "Backpack max price = " << W*p[j];

    return 0;
}
