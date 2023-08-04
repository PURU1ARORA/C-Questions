#include<iostream>
using namespace std;

struct student
{
    int Id;
    char Initial;
    float fees;
};
//To make short form 
typedef struct stud
{
    int Id;
    char Initial;
    float fees;
}stud;

int main(){
//short syntax    
    stud PuruA;
    PuruA.Id=02;
    
//Long complete syntax
    struct student Puru;
    Puru.Id=01;
    Puru.Initial='P';
    Puru.fees=1000;
    cout<<Puru.Id<<endl;
    cout<<Puru.Initial<<endl;
    cout<<Puru.fees<<endl;
    cout<<PuruA.Id<<endl;
    return 0;
}
