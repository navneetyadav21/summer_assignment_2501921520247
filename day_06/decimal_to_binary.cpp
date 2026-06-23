#include <iostream>
using namespace std;

int main(){

   int dec, bin = 0;
   int base = 1;

   cout<<"Enter a number: ";
   cin>>dec;
   
   while(dec>0){
      int d = dec%2;
      bin = bin + (d * base);
      dec/=2;
      base *= 10;
   }
   cout<<bin;
   return 0;
}