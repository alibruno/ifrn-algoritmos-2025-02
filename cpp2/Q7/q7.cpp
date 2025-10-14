#include <iostream>
#include <iomanip>
#include <cmath>

bool temSomaIgualS(int s, int n, int nums[]) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j){
            if(nums[i] + nums[j] == s){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int s, n;
    std::cin >> s;
    std::cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    bool result = temSomaIgualS(s, n, nums);
    std::cout << result << std::endl;
    return 0;
}
