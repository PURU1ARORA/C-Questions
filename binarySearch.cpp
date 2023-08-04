#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(end>=start){
       
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            end = mid - 1;
        }
        else{
            start = mid+1;
        } mid = start + (end - start)/2;
        
        
    }return -1;
}


int main(){
    int puru[6] = {1,2,3,4,5,6};
    int madhav[5] = {9,8,7,6,5};

    int search = BinarySearch(puru,6,2);
    cout<<search<<endl;


    return 0;
}
