#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cod;
    cin >> cod;
    if(cod == 1){
        cout << "Procedência: Amazonas" << endl;
    }
    else if(cod == 2){
        cout << "Procedência: Pará" << endl;
    }
    else if(cod == 3){
        cout << "Procedência: Pernambuco" << endl;
    }
    else if(cod == 6){
        cout << "Procedência: Bahia" << endl;
    }
    else if(cod == 9){
        cout << "Procedência: Belo Horizonte" << endl;
    }
    else if(cod == 15){
        cout << "Procedência: São Paulo" << endl;
    }
    return 0;
}
