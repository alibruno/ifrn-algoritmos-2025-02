#include <iostream>

int mdc(int a, int b) {
    int n = (a<b) ? a : b;
    while (not (a%n == 0 && b%n == 0)){
        n -= 1;
    }
    return n;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int mdcEntreAeB = mdc(a,b);
    std::cout << mdcEntreAeB << std::endl;
    return 0;
}
