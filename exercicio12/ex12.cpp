#include <iostream>

using namespace std;

double somaParcelas(int n)
{
    double s;
    for (double i = 1; i <= n; i++)
    {
        s += (i * (i + 1)) / (i + 3);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    double s = somaParcelas(n);
    cout << "Soma das parcelas: " << s;
    return 0;
}
