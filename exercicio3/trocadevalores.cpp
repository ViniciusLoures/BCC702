#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, aux;
    cin >> a;
    cin >> b;
    aux = a;
    a = b;
    b = aux;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}
