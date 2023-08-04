#include<iostream>
using namespace std;

int main(){
   int a=3;
   int *b = &a;//&---> address of opetrator
   int ** c=&b;
   cout<<c<<endl;
   cout<<*c<<endl;
   cout<<**c<<endl;
   cout<<"adress of a = "<<b<<endl;// *---> derefrence operator
   cout<<"Value at adress = "<<*b<<endl;
   
   return 0;
}
