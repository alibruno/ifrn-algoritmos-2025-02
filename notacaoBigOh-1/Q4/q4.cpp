#include <iostream>
#include <cmath>
#include <cstdlib>

int qtdListaContigDecrescente(int n, int a[]) {
    int qtd = 1;
    int qtdTemp = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (a[j - 1] <= a[j]) {
                qtdTemp++;
                continue;
            }
            break;
        }
        if (qtdTemp > qtd) {
            qtd = qtdTemp;
        }
        qtdTemp = 1;
    }
    return qtd;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int qtd = qtdListaContigDecrescente(n, a);
    std::cout << qtd;
}
