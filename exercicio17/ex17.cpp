#include <iostream>
#include <string>
#include <fstream>

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
    int x;
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
        arquivo << vetor[i].nome << " " << vetor[i].nota1 <<  " " << vetor[i].nota2 << " " <<  " " << vetor[i].media << endl;
    }
    arquivo.close();
    return 0;
}