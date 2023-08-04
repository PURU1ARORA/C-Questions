#include <iostream>
using namespace std;

int main() {
	int X;
	cin>>X;
	if(((X+7)>170)&&(X>100)&&(X<=169)){
	    cout<<"YES"<<endl;
	}
	else if((X+7)<170&&(X>100)&&(X<=169)){
	    cout<<"NO"<<endl;
	}
	else{
	    cout<<"INVALID INPUT";
	}
	return 0;
}
