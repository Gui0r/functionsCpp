#include <iostream>
#include <locale.h>
using namespace std;

double celsiusParaFahreinht(double celsius){
    return (celsius * 9 / 5) + 32;
}

int main(){
     double temperaturaCelsius = 20.0;

     cout << temperaturaCelsius << "celsius é equivalente a " << celsiusParaFahreinht(temperaturaCelsius);
     return 0;
}