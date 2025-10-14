#include <iostream>

int mdc(int a, int b) {
    int n = (a<b) ? a : b;
    while (not (a%n == 0 && b%n == 0)){
        n -= 1;
    }
    return n;
}

int mmc(int a, int b){
    int n = (a<b) ? a : b;
    while (not ((n%a == 0) && (n%b == 0))){
        n += 1;
    }
    return n;
}

struct fracao{
    int numerador;
    int denominador;
};

fracao soma(fracao &f1, fracao &f2){
    int m = mmc(f1.denominador, f2.denominador);
    int numeradorResult = (f1.numerador * m / f1.denominador) + (f2.numerador * m / f2.denominador);
    int mdcRes = mdc(numeradorResult, m);
    fracao f3;
    f3.numerador = numeradorResult / mdcRes;
    f3.denominador = m / mdcRes;
    return f3;
}

int main(){
    fracao f1, f2;
    std::cout << "Insira os valores da primeira fracao:" << std::endl;
    std::cin >> f1.numerador >> f1.denominador;
    std::cout << "Insira os valores da segunda fracao:" << std::endl;
    std::cin >> f2.numerador >> f2.denominador;
    fracao f3 = soma(f1, f2);
    std::cout << "Resultado: " << f3.numerador << "/" << f3.denominador << std::endl;
    return 0;
}
