#include<iostream>
#include<math.h>
using namespace std;

double getDistance(double,double,double,double);

int main(){
	
	double x[2]; double y[2];
	
	for(int i=0;i<2;i++){
	cout<<"Input "<<" x"<<i+1 <<" value :"<<endl;
	cin>>x[i];
	cout<<"Input "<<" y"<<i+1<<" value  :"<<endl;
	cin>>y[i];
	
cout<<"\n";
		
	}
	cout<<"Distence between "<<"("<<  x[0]<<","<< y[0]<<")"<<" and "<<"("<< x[1]<<","<< y[1] << ")"<< ": "<<getDistance(x[0],x[1],y[0],y[1]);
}

double getDistance(double x1,double x2,double y1,double y2){
	double t=pow(x1-x2,x1-x2)+pow(y1-y2,y1-y2);
	double distance=sqrt(t);
	return distance;
}
