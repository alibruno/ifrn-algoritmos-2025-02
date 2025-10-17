#include <iostream>
#include <iomanip>
#include <cmath>

struct cordenada {
    double x, y;
};

double pitagoras_hip(double cat1, double cat2) {
    return std::sqrt(cat1 * cat1 + cat2 * cat2);
}

double menor_distancia(cordenada pontos[], int n) {
    double d = pitagoras_hip((pontos[0].x - pontos[1].x), (pontos[0].y - pontos[1].y));
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double distTemp = pitagoras_hip((pontos[i].x - pontos[j].x), (pontos[i].y - pontos[j].y));
            if (distTemp < d) {
                d = distTemp;
            }
        }
    }
    return d;
}

int main() {
    int n;
    std::cin >> n;
    cordenada pontos[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> pontos[i].x >> pontos[i].y;
    }
    double distancia = menor_distancia(pontos, n);
    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;
    return 0;
}
