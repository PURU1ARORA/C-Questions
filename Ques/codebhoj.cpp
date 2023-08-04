#include<iostream>
using namespace std;

int main(){
    unsigned long int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if((arr[i])%2==0){
            count++;
        }else{continue;}
    }
    cout<<count<<endl;
    return 0;
}
