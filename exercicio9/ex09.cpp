#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M;
    cin >> N;
    int matriz[M][N];
    for (int linha = 0; linha < M; linha++)
    {
        for (int coluna = 0; coluna < N; coluna++)
        {
            cin >> matriz[linha][coluna];
        }
    }

    int maior = matriz[0][0];
    int COLUNA;
    for (int linha = 0; linha < M; linha++)
    {
        for (int coluna = 0; coluna < N; coluna++)
        {
            if (maior < matriz[linha][coluna])
            {
                COLUNA = coluna - 1;
            }
        }
    }

    int soma = 0;
    for (int linha = 0; linha < M; linha++)
    {
        soma += matriz[linha][COLUNA];
    }
    cout << "Soma = " << soma;
    return 0;
}