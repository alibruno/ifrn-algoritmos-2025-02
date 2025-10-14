#include <iostream>

int quantImpares(int a[], unsigned int n) {
    int cont = 0;
    for (unsigned int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            cont++;
        }
    }
    return cont;
}

int main() {
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (unsigned int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int qImpares = quantImpares(a, n);
    std::cout << qImpares << std::endl;
    return 0;
}
