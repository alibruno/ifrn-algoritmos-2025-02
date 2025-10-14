#include <iostream>
#include <cmath>
#include <cstdlib>

int maiorDifConsecutivo(int n, int a[]) {
    int maiorDif = abs(a[0] - a[1]);
    int difTemp;
    for (int i = 2; i < n; ++i) {
        difTemp = abs(a[i-1] + a[i]);
        if(difTemp > maiorDif){
            maiorDif = difTemp;
        }
    }
    return maiorDif;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int menor = maiorDifConsecutivo(n, a);
    std::cout << menor;
}
