#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

struct aluno
{
    string nome;
    float nota1;
    float nota2;
    float media;
};

int main()
{
    ofstream arquivo("alunos.txt");
    int x, indice_maior_media;
    cin >> x;
    aluno vetor[x];
    for (int i = 0; i < x; i++)
    {
        cin >> vetor[i].nome;
        cin >> vetor[i].nota1;
        cin >> vetor[i].nota2;
        vetor[i].media = (vetor[i].nota1 + vetor[i].nota2) / 2;
    }
    for (int i = 0; i < x; i++)
    {
        arquivo << vetor[i].nome << " " << vetor[i].nota1 << " " << vetor[i].nota2 << " "
                << " " << vetor[i].media << endl;
    }
    arquivo.close();
    float maiormedia = -INFINITY;
    for (int i = 0; i < x; i++)
    {
        if (vetor[i].media > maiormedia)
            indice_maior_media = i;
    }
    cout << vetor[indice_maior_media].nome << " " << vetor[indice_maior_media].nota1 << " " << vetor[indice_maior_media].nota2 << " " << vetor[indice_maior_media].media;
    return 0;
}