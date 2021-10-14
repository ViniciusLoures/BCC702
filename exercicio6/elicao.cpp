#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int canditado1 = 0, canditado2 = 0, canditado3 = 0, brancos = 0, nulos = 0, voto = 0, total = 0;
    while (voto != -1)
    {
        cin >> voto;
        switch (voto)
        {
        case 1:
            canditado1 += 1;
            break;
        case 2:
            canditado2 += 1;
            break;
        case 3:
            canditado3 += 1;
            break;
        case 0:
            brancos += 1;
            break;
        case 4:
            nulos += 1;
            break;
        }
    }
    int vencedor;
    if (canditado1 > canditado2 && canditado1 > canditado3)
        vencedor = 1;
    else if (canditado2 > canditado1 && canditado2 > canditado3)
        vencedor = 2;
    else if (canditado3 > canditado1 && canditado3 > canditado2)
        vencedor = 3;
    total = canditado1 + canditado2 + canditado3 + brancos + nulos;
    cout << "Candidato vencedor: " << vencedor << endl;
    cout << "Votos em branco: " << brancos << endl;
    cout << "Votos nulos: " << nulos << endl;
    cout << "Eleitores que compareceram às urnas: " << total << endl;
    return 0;
}