#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    unsigned long int n,x,y;
    cin>>n;
    unsigned long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(unsigned long int i = 1;i < n; ++i) {
    if(arr[0] < arr[i])
      arr[0] = arr[i];
      x=arr[0];
  }
    for(unsigned long int i = 1;i < n; ++i) {
    if(arr[0] > arr[i])
      arr[0] = arr[i];
      y=arr[0];
  }  
    cout<<(x+y)/2<<endl;
    return 0;
}
