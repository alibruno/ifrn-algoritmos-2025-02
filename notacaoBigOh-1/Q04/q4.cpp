#include <iostream>
#include <cmath>
#include <cstdlib>

int qtdListaContigDecrescente(int n, int a[]) {
    int qtd = 1;                    
    int qtdTemp = 1;                
    for (int i = 1; i < n; ++i) {   
        if (a[i] >= a[i - 1]) {     
            qtdTemp++;              
            if (qtdTemp > qtd) {    
                qtd = qtdTemp;      
            }
        } else {
            qtdTemp = 1;            
        }
    }
    return qtd;                     
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int qtd = qtdListaContigDecrescente(n, a);
    std::cout << qtd;
}
