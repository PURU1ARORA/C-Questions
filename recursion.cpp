#include<iostream>
using namespace std;

int fact(int a){
    if(a<=1){
        return 1;
    }
    return a*fact(a-1);
}


int sum(int a){
    if(a==0){
        return 0;
    }
    return a+sum(a-1);
}

int fib(int a){
    if(a==1||a==2){
        return 1;
    }
    return fib(a-1)+fib(a-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<sum(n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}
