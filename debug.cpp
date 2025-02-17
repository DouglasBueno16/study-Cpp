#include <iostream>

using namespace std;

int main(){

    int ano, idade;

    cout << "Digite seu ano de nascimento: ";
    cin >> ano;

    idade = 2025 -ano;
    cout << "Sua idade: " << idade << endl;
    ano ++;

    return 0;
}
