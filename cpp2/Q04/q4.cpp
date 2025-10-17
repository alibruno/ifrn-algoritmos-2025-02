#include <iostream>

long long maiorSomaConsecutiva(int n, long long a[]) {
    long long soma = a[0] + a[1];
    long long somaLaco;
    for (int i = 2; i < n; ++i) {
        somaLaco = a[i - 1] + a[i];
        if (somaLaco > soma) {
            soma = somaLaco;
        }
    }
    return soma;
}

int main() {
    int n;
    std::cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    long long soma = maiorSomaConsecutiva(n, a);
    std::cout << "Maior soma consecutiva = " << soma << std::endl;
    return 0;
}