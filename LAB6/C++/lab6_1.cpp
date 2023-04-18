#include <iostream>
#include <cmath>
using namespace std;


int factorial(int a) {
    return (a == 0) ? 1 : a * factorial(a - 1);
}

int main () {
    int n;
    int x;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;

    double * b = new double[x];

    for (int i = 1; i <= x; i++) {
        b[i-1] = pow(n, i) / factorial(i);
    }

    double result = 1;

    for (int i = 0; i < x; i++) {
        result += b[i];
    }

    cout<<"The result is : " << result << endl;
    return 0;
}