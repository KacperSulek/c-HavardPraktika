#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t;

    t = *a;
    *a = *b;
    *b = t;
}

void main(){
    int x = 1;
    int y = 2;
    cout << x;
    cout << y;
    swap(&x, &y);
    cout << x;
    cout << y;
}