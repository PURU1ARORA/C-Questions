#include<iostream>
using namespace std;
int main(){
    int b,a,i=1;
    cout<<"Enter the number"<<endl;
    cin>>a;
    do{
      b=a*i;
      cout<<a<<"*"<<i<<"="<<b<<endl;
      i++;
    }while(i<=10);
}