#include <iostream>
using namespace std;

int main()
{
    int dinheiro, nota100, nota20, nota5, nota1;
    cin >> dinheiro;
    nota100 = dinheiro / 100;
    nota20 = (dinheiro - (nota100 * 100)) / 20;
    nota5 = (dinheiro - (nota100 * 100) - (nota20 * 20)) / 5;
    nota1 = (dinheiro - (nota100 * 100) - (nota20 * 20) - (nota5 * 5)) / 1;
    cout << "Notas de 100: " << nota100 << endl;
    cout << "Notas de 20: " << nota20 << endl;
    cout << "Notas de 5: " << nota5 << endl;
    cout << "Notas de 1: " << nota1 << endl;
    return 0;
}

