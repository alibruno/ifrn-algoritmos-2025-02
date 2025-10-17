#include <iostream>
#include <iomanip>
#include <cmath>

int sublistaContiguaDeSomaMaxima(int n, int nums[]) {
    int maiorSoma = nums[0] + nums[1];
    for (int i = 0; i < n; ++i) {
        int somaJ = nums[i];
        for (int j = i + 1; j < n; ++j) {
            somaJ += nums[j];
            if (somaJ > maiorSoma) {
                maiorSoma = somaJ;
            }
        }
    }
    return maiorSoma;
}

int main() {
    int n;
    std::cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int result = sublistaContiguaDeSomaMaxima(n, nums);
    std::cout << result << std::endl;
    return 0;
}
