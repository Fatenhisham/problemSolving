
 
#include <iostream>
#include <bits/stdc++.h> 
using namespace std ; 
bool oddNum(long long x ) {
   return ( x % 2 != 0) ; 
}
void isPalindrom ( long long x) {
 
    string fbinarynum = bitset<64>(x).to_string() ; 
    size_t firstOne = fbinarynum.find('1') ; 
    string binarynum = fbinarynum.substr(firstOne) ; 
    string norevnum = binarynum ; 
    reverse(binarynum.begin() , binarynum.end()) ; 
    if( norevnum == binarynum )
    cout<<"YES" ; 
    else cout<<"NO" ; 
    
}
 
int main()
{
    long long  x ;
    cin>>x ; 
    bool res = oddNum(x) ;
    if(res){
        isPalindrom(x) ; 
    }
    else cout<<"NO" ;
 
    return 0;
}