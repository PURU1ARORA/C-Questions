#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str[n];
	    cin>>str[n];
	    for(int i=0;i<n;i+=2){
	        if(str[i]=="0"){
	            if(str[i+1]=="0")
	            cout<<"A";
	            else if(str[i+1]=="1")
	            cout<<"T";
	        }else if(str[i]=="1"){
	            if(str[i+1]=="0")
	            cout<<"C";
	            else if(str[i+1]=="1")
	            cout<<"G";
	        }
	    }
	}
	return 0;
}
