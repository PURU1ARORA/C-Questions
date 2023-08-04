#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    float p=n/a, d=n/b;
        if(x*p>y*d){
	        cout<<"DIESEL"<<endl;
	    }else if(y*d>x*p){
	        cout<<"PETROL"<<endl;
	    }else{
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
