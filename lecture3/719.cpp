#include<bits/stdc++.h>

using namespace std;

int main(){
    int count;
    cin >> count;
    for (int i = 0; i < count; i++){
        int x, y;
        cin >> x >> y;
        if (x > y){
            swap(x, y);
        }
        int sum = 0;
        for (int j = x + 1; j < y; j++){
            if (j % 2 != 0){
                sum += j;
            }
        }
        cout << sum << endl;
    }

        return 0;
}