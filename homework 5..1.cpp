//A program to get the value of base^exponent

#include <iostream>
using namespace std;

int base,exponent;
int getIntegerPower(int ,int );

int main(){
	
	//Get user input to the Base
	
	cout<<"Input Base (Base should be an integer):"<<endl;
	cin>>base;
	
	//Get user input to the exponent
	while(exponent<=0){
		cout<<"Input Exponent (exponent should be a positive, nonzero integer):"<<endl;
	cin>>exponent;
	
	if(exponent<=0){
		cout<<"Invalid Input...Please Try Again.."<<endl;
		cout<<"\n";
	}
	}
	
	cout<<"\n";
	
	//Display the value of Base^Exponent
	cout<<base<<"^"<<exponent<<" = "<< getIntegerPower(base,exponent)<<endl;
	
}

int getIntegerPower(int b,int e){
int t=1;	
for(int i=0;i<e;i++){
	t=t*b;
}
return t;	
	
}
