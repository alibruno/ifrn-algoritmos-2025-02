#include <iostream>
#include <iomanip>
#include <cmath>

int numerosDistintos(int n, int nums[], int distArr[]) {
    int posicoesDistArr = 0;
    bool encount = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (nums[i] == distArr[j]) {
                encount = false;
                break;
            }
        }
        if (encount) {
            distArr[posicoesDistArr] = nums[i];
            posicoesDistArr++;
        }
        encount = true;
    }
    return posicoesDistArr;
}

int main() {
    int n;
    std::cin >> n;
    int nums[n];
    int distArr[n] = {};
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int tamanhoDistArr = numerosDistintos(n, nums, distArr);
    std::cout << "Array com numeros distintos = ";
    for (int i = 0; i < tamanhoDistArr; ++i) {
        std::cout << distArr[i] << " ";
    }
    std::cout << "";
    return 0;
}