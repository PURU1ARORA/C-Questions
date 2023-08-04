#include<iostream>
using namespace std;

int main(){
    int marks[5]={11,22,33,44,55};
    int x,y;
    cout<<"Enter the number u want to search"<<endl;
    cin>>x;
    for(int i=0;i<5;i++){
        if(marks[i]==x)
        { y = i;
            break;
        }else{
            y =0;
        }
    }
    if(y==0){
        cout<<"no"<<endl;
    }else{
        cout<<"yes\n"<<y+1<<"th\telement"<<endl;
    }
    return 0;
    
}
