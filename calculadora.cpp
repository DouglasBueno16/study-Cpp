/* 
==== Calculadora em C++ ====
+ Soma
- Subtração
* Multiplicação
/ Divisão
*/

#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Resultado: " << num1 / num2 << endl;
            break;
        default:
            cout << "Operador inválido!" << endl;
            break;
    }

    return 0;
}