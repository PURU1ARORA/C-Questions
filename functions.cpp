#include<iostream>
using namespace std;


int sum(int ,int );
void gm();

int main(){
    int x,y;
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
    gm();
    return 0;
}

void gm(){
    cout<<"Hello  Good Morning"<<endl;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}
