#include <iostream>


using namespace std;

void cinVector(int *vector, int position);

int main() {

    int vetor[1000];
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Quantidade inválida" << endl;
        return 0;
    } else if (n == 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    cinVector(vetor, n);
    return 0;
}

void cinVector(int *vector, int position) {
     if (position != 1) {
         cout << vector[position -1] << " ";
         cinVector(vector, position - 1);

    }
    else {
         cout << vector[position - 1] << endl;
     }
}
