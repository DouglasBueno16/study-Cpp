/*
Aula 13
Exemplo comando for
*/

#include <iostream>

using namespace std;

int main(){

    int i, num, fat;
    
    cout << "Digite um numero: ";
    cin >> num;

    for (i=1, fat=1; i < num; i++){
        
        fat = fat * (i + 1);

    }

    cout << "Fatorial de " << num << " = " << fat << endl;
    return 0;

}