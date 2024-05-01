#include <iostream>
#include <locale.h>
using namespace std;
int calcularAreaQuadrado(int lado) {
    return lado * lado;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int lado = 5;
    int area = calcularAreaQuadrado(lado);

    cout << "A área do quadrado é: " << area;
    return 0;

}




