#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int money;
	    if(x>y){
	    money=(x*k)+(y*(n-k));
	    cout<<money<<endl;
	    }else{
	        money=x*n;
	        cout<<money<<endl;
	    }
	}
	return 0;
}
