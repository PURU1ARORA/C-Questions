#include<iostream>
using namespace std;


inline int product(int a,int b){
    return a*b;
}

int products(int a,int b){
    static int c=0;//static variable
    c=c+1;//value of c will be retained not recommended to use with inline!!
    return a*b+c;
}


float money(float a,float factor =1.04){
    return a*factor;
}

int main(){
    int a,b;

    cout<<"Enter the value of a Rs"<<endl;
    cin>>a;
    cout<<"After 1 year your money will be= "<<money(a)<<endl;
    cout<<"For VIP the amount will be= "<<money(a,1.1)<<endl;
    // cout<<"The product of a and b\t"<<product(a,b)<<endl;
    // cout<<"The product of a and b\t"<<product(a,b)<<endl;
    // cout<<"The product of a and b\t"<<product(a,b)<<endl;
    return 0;
}
