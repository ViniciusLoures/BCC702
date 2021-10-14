#include <iostream>
#include <string>

using namespace std;

void inverte_ordem(string original, string *invertida)
{
    string aux = original;
    int tamanho = original.length();
    for (size_t i = 1; i <= original.length(); i++)
    {
        aux[tamanho - i] = original[i - 1];
    }
    *invertida = aux;
}

int main()
{
    string userInputWord, palindrome;
    cin >> userInputWord;
    inverte_ordem(userInputWord, &palindrome);
    if (palindrome == userInputWord)
    {
        cout << userInputWord << " é palíndrome" << endl;
    }
    else
        cout << userInputWord << " não é palíndrome" << endl;
    return 0;
}