#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int empId;
    int hour;
    double pay;
    scanf("%d", &empId);
    scanf("%d", &hour);
    scanf("%lf", &pay);
    printf("NUMBER = %d \n", empId);
    printf("SALARY = U$ %.2lf", hour * pay);

    return 0;
}