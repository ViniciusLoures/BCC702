#include <iostream>
#include <string>

using namespace std;

struct alunos
{
    string nome;
    float media;
    int faltas;
};

int main()
{
    int x;
    cin >> x;
    alunos vetor[x];
    for (int i = 0; i < x; i++)
    {
        cin >> vetor[i].nome;
        cin >> vetor[i].media;
        cin >> vetor[i].faltas;
    }
    for (int i = 0; i < x; i++)
    {
        if (vetor[i].media >= 6 && vetor[i].faltas <= 18)
            cout << vetor[i].nome << " APROVADO(A)" << endl;
        else 
            cout << vetor[i].nome << " REPROVADO(A)" << endl;
    }
    return 0;
}