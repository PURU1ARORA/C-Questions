#include<iostream>
using namespace std;

int main(){
    cout<<"Yeh toh kamal ho gya"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if((i>4)&&(i<8)){
        continue;
        }
        cout<<i<<endl;
    }
    
return 0;
}

