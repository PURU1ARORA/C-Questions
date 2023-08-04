#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int n;
    cin>>n;
    unsigned int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    unsigned int x=arr[0],y=arr[n-1];
    cout<<(x+y)/2<<endl;
    return 0;
}
