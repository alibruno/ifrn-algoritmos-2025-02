#include <iostream>

int calcQuantDivisores(int n){
    int divs = 0;
    for (int i = 1; i < (n+1); i++){
        if (n%i == 0){
            divs++;
        }
    }
    return divs;
}

int main() {
    int n;
    std::cin >> n;
    int quantidadeDeDivisores = calcQuantDivisores(n);
    std::cout << quantidadeDeDivisores << std::endl;
    return 0;
}
