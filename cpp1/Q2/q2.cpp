#include <iostream>

long long perimetro(long long l1, long long l2){
    return l1*2 + l2*2;
}

int main(){
    long long l1, l2;
    std::cin >> l1;
    std::cin >> l2;
    long long p = perimetro(l1, l2);
    std::cout << "Perimetro = " << p << std::endl;
}
