#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                
            }
        }
        if(count>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}