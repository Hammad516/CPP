// Code for DUCK number
// duck number have at least one or more zero in it but not at start
// examples of duck numbers are 920 10 1001 120001 etc
// 092 03 899 etc are not duck numbers

#include<iostream>
#include<string>
using namespace std;
int main(){
    //declaring Variables
    string n="";bool zeroFound=false;
    cout<<"Enter a Number: ";
    cin>>n;
    // .lenghth() function is used for getting length of the string
    int length=n.length();
    // loop is started from i=1 as we do not care about i=0 to be zero
    for(int i=1;i<length;i++){
        if((n[i]=='0')){
            zeroFound=true;
            break;      //exiting the loop early when zero found
        }
    }
    // displaying the output
    if(zeroFound){
        cout<<n<<" is a duck Number"<<endl;
    }
    else{
        cout<<n<<" is not a duck Number"<<endl;
    }
return 0;
}