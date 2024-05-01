#include <iostream>
#include <locale.h>
using namespace std;

int soma(int num1, int num2){
    return num1 + num2;
}

int main(){
    int numero1, numero2;

    cout << "Digite 2 números: ";
    cin >> numero1;
    cin >> numero2;

    cout << numero1 << " mais " << numero2 << " dá " << soma(numero1, numero2);  
}