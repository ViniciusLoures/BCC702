#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int raizes(double a, double b, double c, double *x1, double *x2)
{
    double delta = pow(b, 2.0) - 4 * a * c;
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        return 1;
    }
    else if (delta > 0)
    {
        return 2;
    }
    return 10;
}

int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    int quantraizes = raizes(a, b, c, &x1, &x2);
    cout << quantraizes << " raízes reais" << endl;
    if (quantraizes == 0)
    {
        exit(0);
    }
    else if (quantraizes == 1)
        cout << x1 << endl;
    else
        cout << x1 << endl
             << x2 << endl;
    return 0;
}