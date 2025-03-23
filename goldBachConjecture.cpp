// goldBach Conjecture
//this code prints the series in a given range 
// goldBach conjecture means that even number can be expressed as a sum
// of two prime numbers even number must be greater than two
//Example 2+2=4 5+43=48

#include<iostream>
using namespace std;
//declaring Functions
bool isPrime(int);
void  Range(int ,int );
void goldBach(int);

//main Function
int main(){
    int value=0,value1=0;
    int start=0,end=0;
    cout<<"Enter starting num: ";
    cin>>start;
    cout<<"Enter the ending num: ";
    cin>>end;
    // calling Range Function
    Range(start,end);
    return 0;
}
// Range Function for iterating through the given range
void  Range(int s,int e){
    for(int i=s;i<=e;i++){
        if(i>2 && i%2==0 ){
            goldBach(i);    // calling Gold Bach Function
        }
        
    }
    
    return ;
}
// GoldBach Function to check express as sum of prime
void goldBach(int x){
    for(int a=1;a<x;a++){
        int b=x-a;
        //calling isPrime in if Statement
        if(isPrime(a) && isPrime(b)){
            if((a+b)==x){
                cout<<a<<"+"<<b<<"="<<x<<endl;
            }
        }
    }
}
// isPrime to check whetehr the nubmer is prime
bool isPrime(int n){
    bool prime=true;
        if(n<2||n%2==0){
            prime=false;
        }
        if(n==2){
            prime=true;
        }
        if((n%2!=0 && n>2)){
            for(int j=2;j<n;j++){
                if(n%j==0){
                    prime=false;
                    
                }
            }
            
        }
    return prime;
}
