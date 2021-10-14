#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double celsiusFahreheit(double x)
{
    return (x * 1.8) + 32;
}

double fahrenheitCelsius(double x)
{
    return (x - 32) * 5 / 9;
}

int main()
{
    double inputGraus;
    string inputUnit;
    cin >> inputGraus;
    cin >> inputUnit;
    if (inputUnit == "fahrenheit")
    {
        cout << "Temperatura convertida: " << fixed << setprecision(2) << celsiusFahreheit(inputGraus) << " ºF";
    }
    else if (inputUnit == "celsius")
    {
        cout << "Temperatura convertida: " << fixed << setprecision(2) << fahrenheitCelsius(inputGraus) << " ºC";
    }
    else
    {
        cout << "ERRO";
    }
    return 0;
}