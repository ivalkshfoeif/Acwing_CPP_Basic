#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()){
        swap(a, b);
    }
    int lena = a.size();
    int lenb = b.size();
    for (int i = 0; i < lena; i++){
        int indexa = i;
        int indexb = 0;
        bool isTrue = true;
        while(indexb < lenb){
            if (b[indexb] == a[indexa]){
                indexa = (indexa + 1) % lena;
                indexb++;
            }else {
                isTrue = false;
                break;
            }
        }

        if (isTrue){
            cout << "true" << endl;
            return 0;
        }
    }

    cout << "false" << endl;

    return 0;
}