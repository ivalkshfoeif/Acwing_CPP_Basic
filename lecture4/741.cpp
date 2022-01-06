#include<bits/stdc++.h>

using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++){
//         int n;
//         cin >> n;
//         long long p1 = 0, p2 = 1;
//         long long ans = 0;
//             if (n == 0){
//                 ans = p1;
//             }else if ( n == 1){
//                 ans = p2;
//             }else {
//                 for (int i = 2; i <= n; i++){
//                     ans = p1 + p2;
//                     p1 = p2;
//                     p2 = ans;
//                 }
//             }
//         printf("Fib(%d) = %ld\n", n, ans);
//         }

//     return 0;
// }

int main(){
    int n;
    cin >> n;
    long long f[61];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 60; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        printf("Fib(%d) = %ld\n", temp, f[temp]);
    }
}