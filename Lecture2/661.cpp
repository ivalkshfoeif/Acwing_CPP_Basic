#include<bits/stdc++.h>

using namespace std;

int main(){
    double n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;
    double avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1lf\n", avg);
    if (avg >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if (avg < 5.0){
        cout << "Aluno reprovado." << endl;
    }else {
        cout << "Aluno em exame." << endl;
        double y;
        scanf("%lf", &y);
        printf("Nota do exame: %.1lf\n", y);
        double z = (avg + y) / 2;
        if (z >= 5.0){
            cout << "Aluno aprovado." << endl;
        }else {
            cout << "Aluno reprovado." << endl;
        }
        printf("Media final: %.1lf", z);
    }


    return 0;
}