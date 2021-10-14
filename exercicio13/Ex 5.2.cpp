#include <iostream>


using namespace std;

int plusParcelas(int menor, int maior);

int main() {

    int menor, maior;
    cin >> menor >> maior;
    int soma = plusParcelas(menor, maior);
    cout << soma << endl;
    return 0;
}

int plusParcelas(int menor, int maior) {
    if (menor > maior) {
        return 0;
    }
    int soma = menor + plusParcelas(menor + 1, maior);
    return soma;
}
