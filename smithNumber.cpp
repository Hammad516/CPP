// WELCOME TO SMITH NUMBER CODE
// this code will print the smith numbers in a given range 
// only basic concepts are used in this code
// some smith numbers are 4 22 27 58

#include<iostream>
using namespace std;
//declaring Fuctions
int getInput();
bool isPrime(int );
int sumOfDigit(int);
int primeFactor(int);
int Range(int,int);
//main Function
int main() {
	int start=0, end=0;
	cout<<"Enter the starting number: ";
	cin>>start;
	cout<<"Enter the ending number: ";
	cin>>end;
	Range(start,end);
}
//Range Function is used here to deal with the range
int Range(int s,int e){
    for(int i=s;i<=e;i++){
        int x=primeFactor(i);
        int y=sumOfDigit(i);
        bool p=isPrime(i);
        if((x==y) && (p==false)){
            cout<<i<<" ";
        }
    }
return 0;
}
// isPrime Function is used for checking if the number is prime or not
bool isPrime(int h){
    bool prime=true;
    if(h<2){
        prime=false;
    }
    if(h%2==0 && h!=2){
        prime=false;
    }
    if(h==2){
        prime=true;
    }
    if(h%2!=0 && h>2){
        for(int j=2;j<h;j++){
            if(h%j==0){
                prime=false;
            }
        }
    }
    return prime;   //getting prime in return
}

// sumOfDigit Function is used here to calculate the sum of the numbers enterd by the user
int sumOfDigit(int z){
    int sum=0;
    while(z>0){
        int last =z%10;
        sum=last+sum;
        z=z/10;
    }
    return sum;  //getting sum in return 
}

// primeFactor function is used to check if the number is prime Factor of  given digit and this 
// function is also calculating the sum of these factors
int primeFactor(int x) {
	
	bool prime=true,toPro=false;// bool variables 
	int s=0,mod=0,o=0,p=0;// these variables are declared to calculate the sum
	for(int i=1; i<=x; i++) {
	    if(i==2){
	        prime=true;
	    }
		if((i%2!=0 && i>2)||i==2) {
			prime=true;
			toPro=false;
			for(int j=2; j<i; j++) {
				if(i%j==0) {
					prime=false;
        	    }
			}
			// here dealing for(i<=9)
			if(prime){
			    if(i<=9){
			        while(x%i==0){
			        s=s+i;
			        x=x/i;
			        }
			    }
			    if(i>9){
			        while(x%i==0){
			            int temp=i; //using temp to handle loop
			            o=0;// intializing sum here for each iteration
			            while(temp>0){
			               int  l=temp%10;
			                o=o+l;   // l here is used for last digit
			                temp=temp/10;
			            }
			            x=x/i;
			            s=s+o;// here calculating toatal sum after each iteration
			        }
			    }
			    
			}
		}
		
	}
	return s;	// getting final sum here
}

