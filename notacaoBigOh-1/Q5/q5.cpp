#include <iostream>
#include <cmath>
#include <cstdlib>

bool parComSoma_S(int n, int a[], int s) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((a[i] + a[j]) == s) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int s;
    std::cin >> s;
    bool result = parComSoma_S(n, a, s);
    if (result) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }
}
