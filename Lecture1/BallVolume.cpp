#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    double R;

    cin >> R;

    printf("VOLUME = %.3lf", R * R * R * 3.14159 * 4 / 3.0);
    return 0;
}