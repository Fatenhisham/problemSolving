

 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long  power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


void Equation(int x, int n) {
    long long  sum = 0;

   
    sum += (power(x, 0) - 1);

    
    for (int i = 2; i <= n; i += 2) {
        sum += power(x, i);
    }

    cout << sum << endl;
}

int main() {
    int x, n;
    cin >> x >> n;
    Equation(x, n);
    return 0;
}