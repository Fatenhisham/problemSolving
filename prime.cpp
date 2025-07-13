

 
#include <iostream>
 
using namespace std;
 
int main()
{
   int n ;  cin>>n ;
   bool t = true ; 
   for(int i=2 ; i<=n ; i++ ) {
       int d= i/2 ;
        for(int j=2 ; j<=d ; j++ ) {
        if( i%j == 0 ) {
       t = false ;
         break ; 
            
        }
        }
       if(t)  cout<< i <<" " ;
       t = true ;
   }
    return 0;
}