#include<iostream>
using namespace std;
#define n 6
int puru[n];
int top = -1;
void push(int x){
    
    if(top==n){
        cout<<"Overflow"<<endl;
    }else{
        
        top=top+1;
        puru[top]=x;
    }
}
void pop(int a[]){
    if(top==-1){
        cout<<"empty"<<endl;
    }
    else{
        int x = puru[top];
        top--;
        cout<<"deleted"<<x<<endl;
    }
}


int main(){
    int k;
    
    for(int i=0;i<n;i++){
        cin>>puru[i];
        top++;
        k = top;
    }
    pop(puru);
    for(;k<=0;k--){
        cout<<puru[k];
    }

    return 0;
}
