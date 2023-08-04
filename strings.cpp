#include<iostream>
using namespace std;

int main(){
    int count=0;
    char name[50];
    cout<<"Enter your name"<<endl;
    cin>>name;
    for(int i=0 ;!(name[i]=='\0');i++){
        count++;
        
    }
    cout<<count;
    return 0;
}
