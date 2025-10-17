#include <iostream>

int main() {
    int distInicioAoFim;
    int distEntrePostes;
    std::cin >> distInicioAoFim >> distEntrePostes;
    int distancia = 0;
    int quantPostes = 1;
    while (distancia < distInicioAoFim){
        distancia += distEntrePostes;
        quantPostes++;
    }
    std::cout << quantPostes << std::endl;
    return 0;
}