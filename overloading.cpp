#include<iostream>
using namespace std;


int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int vol(double r,int h){
    return (3.14*r*r*h);
}

int vol(int a){
    return a*a*a;
}

int vol(int l,int b, int h){
    return l*b*h;
}


int main(){
    cout<<sum(1,4)<<endl;
    cout<<sum(1,4)<<endl;
    cout<<vol(5,4,2)<<endl;
    return 0;
}
