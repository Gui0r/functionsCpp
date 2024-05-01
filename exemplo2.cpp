#include <iostream>
#include <locale.h>
using namespace std;

int somar(int a, int b){
    return a + b;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num = 1, num2 = 3;

    cout << "A soma de " << num << " e " << num2 << " é " << somar(num,num2);
}