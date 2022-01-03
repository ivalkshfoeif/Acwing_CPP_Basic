#include<bits/stdc++.h>

using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if (delta <= 0 || a == 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    printf("R1 = %.5lf\n", (-b + sqrt(delta)) / (2 * a));
    printf("R2 = %.5lf", (-b - sqrt(delta)) / (2 * a));
    return 0;
}