#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    cin >> tamanho;
    int vetor[tamanho];
    for (int x = 0; x < tamanho; x++)
    {
        cin >> vetor[x];
    }

    int procurado;
    cin >> procurado;

    int posicao = -1;
    for (int x = 0; x < tamanho; x++)
    {
        if (vetor[x] == procurado)
        {
            posicao = x;
        }
    }
    cout << "Posição do elemento " << procurado << ": " << posicao;
    return 0;
}
