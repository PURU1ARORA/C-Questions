#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    if(a>b){
	        if(a>c){
	        cout<<a<<endl;
	    }else{
	        cout<<c<<endl;
	        
	    }
        }else if(b>c){
            cout<<b<<endl;
        }  else cout<<c<<endl;
	
}
        return 0;
}
