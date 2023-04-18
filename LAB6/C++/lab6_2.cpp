#include <iostream>
#include <cmath>
using namespace std;

double myFunc() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double a = pow(-1, i + 1) / i;
        sum += a;
    }
    return sum;
}

int main() {

    double sum = myFunc();
    cout << "The result is  " << sum;

    return 0;
}