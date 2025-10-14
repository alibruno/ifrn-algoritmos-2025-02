#include <iostream>
#include <iomanip>
#include <cmath>

double calcAproxRaizQuadrada(double n, double r){
    double raizResult = (r + n/r)/2;
    if (std::fabs(r - raizResult) < 0.001){
        return raizResult;
    }
    return calcAproxRaizQuadrada(n, raizResult);
}

double raizQuadrada (double n){
    return calcAproxRaizQuadrada(n, n/2);
}

int main(){
    double n;
    std::cin >> n;
    double raizQ = raizQuadrada(n);
    std::cout << "Raiz aproximada = " << std::fixed << std::setprecision(3) << raizQ << std::endl;
}
