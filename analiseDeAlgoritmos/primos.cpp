#include <chrono>
#include <iostream>

bool prime1(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 2;
}

bool prime2(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n / 2; ++d)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 1;
}

bool prime3(long long n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    int qty_divs = 1;
    for (long long d = 3; d <= n / 2; d += 2)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 1;
}

bool prime4(long long n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    
    bool p = true;
    long long d = 3;

    while (p and d <= n / 2) {
        if (n % d == 0)
        {
            p = false;
        }
        d = d + 2;
    }
    return p;
}

int main() {
    int n = 42;

    long long testesPrimo[] = {
        11LL, 240000029LL, 480000077LL, 720000103LL,
        960000131LL, 1200000133LL, 1440000137LL, 1680000149LL,
        1920000161LL, 2160000163LL, 2400000167LL, 2640000217LL,
        2880000251LL, 3120000253LL, 3360000257LL, 3600000269LL,
        3840000289LL, 4080000293LL, 4320000329LL, 4560000343LL,
        4800000347LL, 5040000443LL, 5280000461LL, 5520000463LL,
        5760000473LL, 6000000511LL, 6240000581LL, 6480000589LL,
        6720000593LL, 6960000613LL, 7200000623LL, 7440000629LL,
        7680000703LL, 7920000707LL, 8160000721LL, 8400000727LL,
        8640000749LL, 8880000757LL, 9120000809LL, 9360000827LL,
        9600000833LL, 9840000869LL};

    for (long long i = 0; i < n; i++) {
        auto beg = std::chrono::high_resolution_clock::now();
        prime1(testesPrimo[i]);
        auto end = std::chrono::high_resolution_clock::now();

        auto dur = end - beg; // Duração do cronômetro
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
        std::cerr << duration.count() << std::endl;
    }

    return 0;
}
