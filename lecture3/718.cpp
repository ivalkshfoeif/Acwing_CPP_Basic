#include<bits/stdc++.h>

using namespace std;

int main(){
    int c = 0, r = 0, f = 0;
    int count;
    string type;
    cin >> count;
    for (int i = 0; i < count; i++){
        int temp;
        cin >> temp >> type;
        if (type == "C"){
            c += temp;
        }else if (type == "R"){
            r += temp;
        }else if (type == "F"){
            f += temp;
        }
    }
    int total = c + r + f;
    printf("Total: %d animals\n", total);
    printf("Total coneys: %d\n", c);
    printf("Total rats: %d\n", r);
    printf("Total frogs: %d\n", f);
    printf("Percentage of coneys: %.2lf %\n", c * 100.0 / total);
    printf("Percentage of rats: %.2lf %\n", r * 100.0 / total);
    printf("Percentage of frogs: %.2lf %\n", f * 100.0 / total);

    return 0;
}