#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int x= str.length();
    for(int i=0;i<x;i++){
     if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')){
         str.erase(i,1);
     }
     else{continue;}
    
    }  cout<<str<<endl;
    







    // float mark;
    // cin>>mark;
    // string str;
    // getline(cin, str);
    // string s1="manjeet is a ",s2="topper",s3="backbencher";
    // if(mark>8){
    //     s1.append(s2);
    // }else{
    //     s1.append(s3);
    // }
    // cout<<s1<<endl;
    return 0;
}
