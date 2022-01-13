#include<bits/stdc++.h>

using namespace std;

const int N = 1005;

// int ctn = 0;

// int p = 0;

int a[N];

void swap(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
   // printf("swap %d with %d \n", x, y);
}

int partition(int a[], int start, int end, int pivotIndex){
    int pivot = a[pivotIndex];
    //cout << p++ << " Partiton pivot:" << pivot << endl;
    swap(a, pivotIndex, start);
    int ptr = start + 1;
    for (int i = start + 1; i <= end; i++){
        if (a[i] < pivot){
            swap(a, i, ptr);
            ptr++;
        }
    }
    swap(a, ptr - 1, start);
    return ptr - 1;
}

void quick_sort(int a[], int l, int r){

    if (l >= r){
        return;
    }
    int pivotIndex = (l + r) / 2;
    //cout << ctn++ << " l + r / 2:" << pivotIndex << endl;
    pivotIndex = partition(a, l, r, pivotIndex);
    //cout << ctn++ << " PivotIndex after partition:" << pivotIndex << endl;
    // if (ctn > 100){
    //     exit(0);
    // }
    quick_sort(a, l, pivotIndex - 1);
    quick_sort(a, pivotIndex + 1, r);
}

void print(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}


int main(){

    int n, l, r;
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    //print(a, n);

    quick_sort(a, l, r);

    print(a, n);

    return 0;
}