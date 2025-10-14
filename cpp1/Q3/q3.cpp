#include <iostream>
#include <iomanip>

double areaCirculo(double d) {
    double raio = d / 2;
    return (raio * raio) * 3.14159;
}

int main() {
    double d;
    std::cin >> d;
    double areaC = areaCirculo(d);
    std::cout << "Area do circulo = " << std::fixed << std::setprecision(5) << areaC << std::endl;
}
