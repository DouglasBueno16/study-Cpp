// Demonstração de switch

#include <iostream>

using namespace std;

int main(){
    char op = 'Q';
    //int num = 12;
    
    switch(op) {
        case 'Q':
            cout << "Opcao Q" << endl;      
            break;  
        case 'q':
            cout << "Opcao q" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}
