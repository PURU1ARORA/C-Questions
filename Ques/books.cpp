#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y%z==0){
	        int a=(x*y)/z;
	        cout<<a<<endl;
	    }else{
	        int a=y/z+1;
            int b=a*x;
	        cout<<b<<endl;
	    }
	}
	return 0;
}
