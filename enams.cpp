#include<iostream>
using namespace std;

int main(){
    enum meal{Breakfast,Lunch,Dinner};
    cout<<Breakfast<<endl;
    meal p = Breakfast;
    cout<<(p==0);
    return 0;
}
