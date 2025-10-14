#include <iostream>
#include <iomanip>
#include <cmath>

bool ehDecrescente(int n, int nums[]) {
    for (int i = 1; i < n; ++i) {
        if (nums[i - 1] < nums[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    bool result = ehDecrescente(n, nums);
    std::cout << result << std::endl;
    return 0;
}
