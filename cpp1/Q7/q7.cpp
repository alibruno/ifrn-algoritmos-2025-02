#include <iostream>

bool isDoisNumerosPrimosEntreSi(int a, int b) {
    bool isPrimo = true;
    int n = (a<b) ? a : b;
    for (int i = 2; i < (n+1); i++) {
        if (a%i == 0 && b%i == 0) {
            isPrimo = false;
        }
    }
    return isPrimo;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    bool isPrimo = isDoisNumerosPrimosEntreSi(a,b);
    std::cout << isPrimo << std::endl;
    return 0;
}
