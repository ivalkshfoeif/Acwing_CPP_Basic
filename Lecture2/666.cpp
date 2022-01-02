#include<bits/stdc++.h>

using namespace std;


int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if (a < b || a < c){
        if ( b > c){
            double temp = b;
            b = a;
            a = temp;
        }else {
            double temp = c;
            c = a;
            a = temp;
        }
    }

    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else {
        if (a * a == b * b + c * c){
            cout << "TRIANGULO RETANGULO" << endl;
        }else if (a * a > b * b + c * c){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }else if (a * a < b * b + c * c){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl; 
        }else if ( a == b || b == c || c == a){
            cout << "TRIANGULO ISOSCELES" << endl; 
        }


    }

    return 0;
}