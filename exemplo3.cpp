#include <iostream>
#include <locale.h>
using namespace std;

bool ehPar(int num){
    return num % 2 == 0;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero = 0;

    cout << " é " << ehPar(numero) ? "par" : "impar";
}