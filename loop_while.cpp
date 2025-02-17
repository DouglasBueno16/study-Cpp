/*
Aula 12
Exemplo de loop while
*/

#include <iostream>

using namespace std;

int main(){

    int n = 1;
    while (n < 100)
    {
        if (n % 2 != 0){

            n ++;
            continue; //volta para o inicio do while
            
        }

        cout << "Número: " << n << endl;
        n ++;
    }

    return 0;

}
