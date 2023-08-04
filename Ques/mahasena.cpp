#include <iostream>
using namespace std;

int main() {
	int N,b;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
	    cin>>a[i];
	}
    for(int i=0;i<N;i++){
        if(a[i]%2==0){
        b++;
        
        } 
    }
    if(b>(N-b)){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
	return 0;
}
