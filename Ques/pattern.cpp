#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=0;j<i;j++){
            cout<<" ";
        }cout<<"\n"<<endl;   
    }  
    return 0;
}
