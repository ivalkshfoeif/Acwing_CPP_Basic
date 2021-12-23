#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int ID1, Number1, ID2, Number2;
    double Price1, Price2;

    cin >> ID1 >> Number1 >> Price1;
    cin >> ID2 >> Number2 >> Price2;

    printf("VALOR A PAGAR: R$ %.2lf", Number1 * Price1 + Number2 * Price2);
    return 0;
}