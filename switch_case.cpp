#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter="<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 20:
        cout<<"Adult"<<endl;
        break;
    default:
        cout<<"No special cases";
        break;
    }
    cout<<"Done";
    return 0;
}