#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int x, y;
    double price = 0.0;

    cin >> x >> y;
    if (x == 1){
        price = 4;
    }else if (x == 2){
        price = 4.5;
    }else if (x == 3){
        price = 5.0;
    }else if (x == 4){
        price = 2.0;
    }else if (x = 5){
        price = 1.5;
    }else {
        cout << "Wrong ID" << endl;
    }

    printf("Total: R$ %.2lf", price * y);

    return 0;
}