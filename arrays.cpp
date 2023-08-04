#include<iostream>
using namespace std;

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    cout<<endl;
    for(int n=0;n<5;n++){
        cout<<"The value of array of no. "<<(n+1)<<"\t"<<marks[n]<<endl;
    }
    return 0;
}
