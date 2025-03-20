#include<iostream>
using namespace std;
int getInput();
bool isPrime(int );
int sumOfDigit(int);
int primeFactor(int);
int Range(int,int);
int main() {
	int start=0, end=0;
	cout<<"Enter the starting number: ";
	cin>>start;
	cout<<"Enter the ending number: ";
	cin>>end;
	Range(start,end);
}
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
    return prime;
}
int sumOfDigit(int z){
    int sum=0;
    while(z>0){
        int last =z%10;
        sum=last+sum;
        z=z/10;
    }
    return sum;
}
int primeFactor(int x) {
	bool prime=true,toPro=false;
	int s=0,mod=0,o=0,p=0;
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
			if(prime){
			    if(i<=9){
			        while(x%i==0){
			        s=s+i;
			        x=x/i;
			        }
			    }
			    if(i>9){
			        while(x%i==0){
			            int temp=i;
			            o=0;
			            while(temp>0){
			               int  l=temp%10;
			                o=o+l;
			                temp=temp/10;
			            }
			            x=x/i;
			            s=s+o;
			        }
			    }
			    
			}
		}
		
	}
	return s;
}

