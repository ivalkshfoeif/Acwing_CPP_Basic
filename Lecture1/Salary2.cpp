#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    string name;
    double basicPay, sell;
    cin >> name >> basicPay >> sell;

    printf("TOTAL = R$ %.2lf", basicPay + sell * 0.15);

    return 0;
}