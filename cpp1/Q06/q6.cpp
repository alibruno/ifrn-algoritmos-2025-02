#include <iostream>

bool calcQuantDivisores(int n){
    int divs = 0;
    for (int i = 1; i < (n+1); i++){
        if (n%i == 0){
            divs++;
        }
    }
    if (divs > 2){
        return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    int isPrimo = calcQuantDivisores(n);
    std::cout << isPrimo << std::endl;
    return 0;
}
