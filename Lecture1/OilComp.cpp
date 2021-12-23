#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int X;
    double Y;
    scanf("%d", &X);
    scanf("%lf", &Y);
    printf("%.3lf km/l", X / Y);

    return 0;
}