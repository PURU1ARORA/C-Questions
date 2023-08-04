#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if((c>=a)&&(d>=b)){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else{
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}
