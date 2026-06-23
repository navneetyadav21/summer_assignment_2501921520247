#include <iostream>
using namespace std;

int main(){

   int bin, dec = 0;
   int base = 1;

   cout<<"Enter a binary number: ";
   cin>>bin;
   
   while(bin>0){
      int d = bin%10;
      dec = dec + (d * base);
      bin/=10;
      base *= 2;
   }
   cout<<dec;
   return 0;
}