

#include <iostream>
#include <bits/stdc++.h> 
using namespace std ; 
void twoNum(float x , float y) {
    
    cout<< "floor "<<x << " / " << y <<" = "<< floor(x / y) <<endl  ; 
     cout<< "ceil "<<x << " / " << y <<" = "<< ceil(x / y) <<endl; 
      cout<< "round "<<x << " / " << y <<" = "<< round(x / y) <<endl; 
}
int main()
{
    float x , y ; 
    cin>> x>>y ; 
    twoNum(x , y) ; 
 
    return 0;
}