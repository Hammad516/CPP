// this code will check if a number is karapraker
// or not. A karapraker number is one if the square 
// of number spilits into two parts it sums up back
// to number 45^2= 2025  20+25=45 so 45 is karapraker

#include<iostream>
#include<cmath>
using namespace std;
//declaring Functions
int square(int);
int split(int,int);

int main(){
    int n=0,count=0;// variables 
    cout<<"Enter a positive Number: ";
    cin>>n;
    int valid=n;
    if(n<0){
        cout<<"Number cant be negative ";// checking if num is negative
        return 0;
    }
    else{
        while (valid>0)
        {
            valid=valid/10;
            count++;
        }
        int y=split(n,count);
        if(n==y){
            cout<<"Enterd Number is Kapraker Number"<<endl;
        }
        else{
            cout<<"Enterd Number is not Kapraker Number"<<endl;
        }
    }

}

// square function will return the square of  a number
int square(int x){
    int z=x*x;
    return z;
}
// function used to spilit the number and getting sum back
int split(int y,int count){
    int s=square(y);    //calling square function
    int count1=0;double sum=0.0; //decalring variables
    int sCount=0;int x=s;int p=s;
    while(x>0){
        x=x/10;
        sCount++; // getting total digit in a squared number
    }
    while(count1<count){
        int last=s%10;
        sum=last*pow(10,count1)+sum;
        s=s/10;
        count1++; // count1 is used here to make sure that iterations 
                  // does not exceed than the digits in given num
        
    }
    int remaining=sCount-count; // getting remainnig digit from total square num digit
    int rem1=0; double som =0.0;
    double divide=(10*pow(10,(count)));
    // loop for getting the remaining half num
    while(rem1<remaining){
        int first=p/divide;
        som=first+som*pow(10,rem1);
        p=p-(first*divide);
        divide=divide/10;
        rem1++;
    }
    sum=som+sum; // som and sum is used for getting sum

    return sum; // getting final sum here
}