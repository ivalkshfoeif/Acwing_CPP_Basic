#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int N, hour, minute, second;
    scanf("%d", &N);
    hour = N / 3600;
    N %= 3600;
    minute = N / 60;
    N %= 60;
    second = N;
    printf("%d:%d:%d", hour, minute, second);
    return 0;
}