
 
#include <iostream>
#include <bits/stdc++.h> 
using namespace std ; 
void swapNum(int x , int y) {
    int temp = x ; 
    x = y ; 
    y = temp ; 
    
    cout<< x << " "<< y  ; 
    
}
int main()
{
    int x , y ; 
    cin>> x>>y ; 
    swapNum(x , y) ; 
 
    return 0;
}