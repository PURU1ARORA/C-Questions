#include<iostream>
using namespace std;
int n;
void InsertionSort(int a[n]){
    for(int i=0;i<n;i++){
        int temp = a[i];
        int j =i+1;
        for(;j<=n;j++){
            if(a[j]>temp){
                a[j]=a[j+1];
            }
            else{
                break;
            }
            
        }
        a[j-1]=temp;
    }
}

int main(){
    int puru[4]={2,4,1,5};
    InsertionSort(puru);
    for(int i=0;i<4;i++){
        cout<<puru[i]<<endl;
    }
    return 0;
}
