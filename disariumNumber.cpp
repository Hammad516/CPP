// Disarium Number Code/
// Number is dissarium if sum of index of
// number is equal to the orignal number
// code will check if an enterd number is 
// dissarium or not dissarium number example 
//89 135  bcz 8 power 1(8^1) + 9 square (9^2) = 89

//including the requried libraries
#include<iostream>
#include<cmath>
using namespace std;
// declaring function
int disarium(int,int);
int main(){
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    // variable valid to iterarte through the loop
    // count to calculate number of digits
    int valid=n;int count=0;
    while(valid>0){
        valid=valid/10;
        count++;
    }
    // calling disarium Fucntion and storing value in s
    int s=disarium(n,count);
    // getting output after condition
    if(s==n){
        cout<<"Entered  number is disarium number "<<s<<endl;
    }
    else{
        cout<<n<<" is not disarim number"<<endl;
    }
}

// dissarium Function to calculate square at specific 
// position and getting sum in return 

int disarium(int n,int count){
    double sum=0.0;
    while (count>0)
    {
        int last=n%10;
        sum=sum+pow(last,count);
        n=n/10;
        count--;
    }
    return sum;
}
