#include <iostream>
#include <locale.h>
using namespace std;

int calcularFatorial(int num) {
    int resultado = 1;
    for(int i = 2; i <= num; i++){
        resultado *= i;
    }
    return resultado;
}
int main(){
    int numero = 5;

    cout << "o fatorial de " << numero << " é " << calcularFatorial(numero);
}