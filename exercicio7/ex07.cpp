#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int tamanho;
    cin >> tamanho;

    if (tamanho < 0)
    {
        cout << "Quantidade inválida" << endl;
    }
    else
    {
        int vetor[tamanho];
        for (int i = 0; i < tamanho; i++)
        {
            cin >> vetor[i];
        }

        int menor = vetor[0];
        int posicao = 0;
        for (int x = 0; x < tamanho; x++)
        {
            if (menor > vetor[x])
            {
                menor = vetor[x];
                posicao = x;
            }
        }
        vetor[posicao] = vetor[0];
        vetor[0] = menor;
        for (int y = 0; y < tamanho; y++)
        {
            cout << vetor[y] << "  ";
        }
    }
}