#include <iostream>
#include <cmath>
#include <cstdlib>

int calcDecaimento(int t, double mi) {
    int tempoTotal = 0;
    while ((mi/=2) > 1) {
        tempoTotal += t;
    }
    tempoTotal += t;
    return tempoTotal;
}

int main() {
    int t;
    double mi;

    std::cin >> t;
    std::cin >> mi;

    int tempoTotal = calcDecaimento(t, mi);
    std::cout << tempoTotal << " segundo(s)" << std::endl;
}
