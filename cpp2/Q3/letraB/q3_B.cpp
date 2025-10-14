#include <iostream>

void conta_positivos_e_negativos(int a[], int n, int positivos[], int& qtd_positivos, int negativos[], int& qtd_negativos) {
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            positivos[qtd_positivos] = a[i];
            qtd_positivos++;
            continue;
        }
        negativos[qtd_negativos] = a[i];
        qtd_negativos++;
    }
}

int main() {
    int n = 0;
    int qtd_positivos = 0;
    int qtd_negativos = 0;
    std::cin >> n;
    int a[n], positivos[n], negativos[n]; // A quantidade máxima de positivos e negativos é n
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    conta_positivos_e_negativos(a, n, positivos, qtd_positivos, negativos, qtd_negativos);
    std::cout << "Quantidade de números positivos: " << qtd_positivos << std::endl;
    if (qtd_positivos > 0) {
        std::cout << positivos[0];
        for (int i = 1; i < qtd_positivos; ++i) {
            std::cout << " " << positivos[i];
        }
    }
    std::cout << "\nQuantidade de numeros negativos: " << qtd_negativos << std::endl;
    std::cout << qtd_negativos << std::endl;
    if (qtd_negativos > 0) {
        std::cout << negativos[0];
        for (int i = 1; i < qtd_negativos; ++i) {
            std::cout << " " << negativos[i];
        }
    }
    return 0;
}
