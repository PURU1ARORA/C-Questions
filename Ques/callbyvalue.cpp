#include<iostream>
using namespace std;


int sum(int a, int b){
    int c=a+b;
    return c;
}

void swappointer(int* a,int* b){
    int c=*a;
    *a=*b;
    *b=c;
}


int swapreference(int &a,int &b){
    int c=a;
    a=b;
    b=c;
    return 0;
}

int main(){
    int a=4,b=6;
    cout<<a<<b<<endl;
    //swappointer(&a,&b);//using pointers
    swapreference(a,b);//using reference variable
    cout<<a<<b<<endl;
    return 0;
}
