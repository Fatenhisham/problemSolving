#include <iostream>
using namespace std ; 

bool isLucky(long long num) {
    if (num == 0) return false;
    while (num > 0) {
        long long digit = num % 10;
        if (digit != 4 && digit != 7) return false;
        num /= 10;
    }
    return true;
}


void generateLuckyNumbers(long long maxB, long long lucky[], int& size) {
    size = 0;
  
    lucky[size++] = 4;
    lucky[size++] = 7;
    
    
    for (int i = 0; i < size; i++) {
        long long curr = lucky[i];
        
        long long next = curr * 10 + 4;
        if (next <= maxB) lucky[size++] = next;
       
        next = curr * 10 + 7;
        if (next <= maxB) lucky[size++] = next;
    }
}

int main() {
    long long A, B;
    cin >> A >> B;
    
  
    long long lucky[100];
    int size = 0;
    
    
    generateLuckyNumbers(B, lucky, size);
    
   
    
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (lucky[i] >= A && lucky[i] <= B) {
            cout << lucky[i] << " ";
            found = true;
        }
    }
    
    
    if (!found) {
        cout << -1;
    }
    cout << endl;
    
    return 0;
}









