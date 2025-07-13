

#include <iostream>
#include <bits/stdc++.h> 
using namespace std ; 
void GCDNum(int x , int y) {
   int grnum = 1 ; 
   if(x<y){
       for(int i=1 ; i<=x ;i++){
           if (x%i == 0 && y % i ==0) {
               if( i> grnum ) grnum = i ; 
           }
       }
   }
   else{
       for(int i=1 ; i<=y ;i++){
            if (y%i == 0 && x% i ==0) {
               if( i> grnum ) grnum = i ; 
           }
           
       }
   }
  cout<<grnum ; 
    
}
int main()
{
    int x , y ; 
    cin>> x>>y ; 
    GCDNum(x , y) ; 
 
    return 0;
}