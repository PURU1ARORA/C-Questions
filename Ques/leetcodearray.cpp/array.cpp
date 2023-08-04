#include<iostream>
using namespace std;
 
int main(){
    int i=0,size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    while(i<size){
        cin>>arr[i];
        i++;
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }
    
    cout<<endl;
    
    
    //maximum element
    

    int max=arr[0];
    for(int i = 0; i < size ; i++){
        if(max>=arr[i]){
            continue;
        }else{
            max = arr[i];
        }
    }
    cout<<max<<endl;

    cout<<"Enter search"<<endl;
    int x;
    cin>>x;

    
    //linear search
    
    
    for(int i= 0; i<size; i++){
        if(x==arr[i]){
            cout<<arr[i]<<endl;
            cout<<(i+1)<<"th place"<<endl;
            break;
        }
        }

    // reversal 

    int a;
    for(int i=0; i<size/2; i++){
        a=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=a;
    }    
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }

    cout<<endl;

    //swap alternates

    int b;
    for(int i=0;i<size;i+=2){
        b=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=b;
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }


    //unique elements

    int uni[size];
    for(int i=0;i<size;i++){
        if(arr[i]!==uni[])

    }


    return 0;
}
