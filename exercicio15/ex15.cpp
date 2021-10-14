#include <iostream>
#include <string>

using namespace std;

struct carro
{
    string marca;
    int ano;
    float distancia;
    float consumo;
};

int main()
{
    carro user_car;
    cin >> user_car.marca;
    cin >> user_car.ano;
    cin >> user_car.distancia;
    cin >> user_car.consumo;
    float kmlitro = user_car.distancia / user_car.consumo;
    cout << "Quilômetros por litro: " << kmlitro;

    return 0;
}