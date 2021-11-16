
/*A program to take a positive value of N as 
input, and outputs the first N elements of the Fibonacci series.*/

#include<iostream>
using namespace std;


int fibonacci(int );

int main(){
	
	int n,num;             
	cout<<"Enter N: ";     
	cin>>n;
	cout<<endl;
	cout<<"The first "<<n<<" elements of the Fibonacci series: " <<fibonacci(n);
	
	return 0;
}

int fibonacci(int n){
	if(n<=1)
		return n;
	int result= fibonacci(n-1)+fibonacci(n-2);
	return result;     
}

