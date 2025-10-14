#include <iostream>
#include <cmath>
#include <cstdlib>

int calcPropagacao(int populacao) {
    int virusEspalhado = 1;
    int qtdDias = 0;
    while (virusEspalhado < populacao) {
        virusEspalhado *= 2;
        qtdDias++;
    }
    return qtdDias;
}

int main() {
    int populacao;
    std::cin >> populacao;
    int qtdDias = calcPropagacao(populacao);
    std::cout << qtdDias << " dia(s)" << std::endl;
}
