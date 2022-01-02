#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    double x;
    int rate = 4;
    cin >> x;
    if (x >= 0 && x <= 400){
        rate = 15;
    }else if (x >= 400.01 && x <= 800){
        rate = 12;
    }else if ( x >= 800.01 && x <= 1200){
        rate = 10;
    }else if ( x >= 1200.01 && x <= 2000){
        rate = 7;
    }else {
        rate = 4;
    }
    printf("Novo salario: %.2lf\n", (100 + rate) * x / 100);
    printf("Reajuste ganho: %.2lf\n", rate * x / 100);
    printf("Em percentual: %d %%", rate);
    return 0;
}