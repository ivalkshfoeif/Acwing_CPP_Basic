#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a){
        printf("Perimetro = %.1lf", a + b + c);
    }else {
        printf("Area = %.1lf", (a + b) * c / 2.0);
    }
    return 0;
}