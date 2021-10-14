#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int idade, sexo, masc = 0, fem = 0, total = 0;
    double media;
    idade = 1;
    do
    {
        cin >> idade;
        if (idade < 0)
        {
            break;
        }
        else
        {
            media = media + idade;
            total = total + 1;
        }
        cin >> sexo;
        if (sexo == 0)
        {
            masc += 1;
        }
        else if (sexo == 1 && idade >= 30 && idade <= 45)
        {
            fem += 1;
        }
    } while (idade >= 0);
    media = media / total;
    cout << "Idade média: " << setprecision(7) << media << endl;
    cout << "Total feminino [30-45]: " << fem << endl;
    cout << "Total masculino: " << masc << endl;
    return 0;
}
