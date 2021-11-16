//A program that takes the time as three integer arguments (for hours, minutes,and seconds),
// and returns the number of seconds since the last time the clock “struck
//12.”

#include <iostream>
using namespace std;

int getTotsec(int ,int ,int );

int main(){
	int hours[2],minutes[2],seconds[2];
	for(int i=0;i<2;i++){
		
		cout<<"input Time "<<i+1<<endl;
		cout<<"******************"<<endl;
	
	hours[i]=-1;
	while(!(hours[i]>=0 && hours[i]<=12)){
		cout<<"Input Hours : ";
		cin>>hours[i];
		
		if(!(hours[i]>=0 && hours[i]<=12)){
			
			cout<<"Invalid Input...Try again.."<<endl;
		}
		
	}
	minutes[i]=-1;
	while(!(minutes[i]>=0 && minutes[i]<=59)){
		cout<<"Input Minutes : ";
		cin>>minutes[i];
		
		if(!(minutes[i]>=0 && minutes[i]<=59)){
			
			cout<<"Invalid Input...Try again.."<<endl;
		}
		
	}	
	seconds[i]=-1;
	while(!(seconds[i]>=0 && seconds[i]<=59)){
		cout<<"Input Second : ";
		cin>>seconds[i];
		
		if(!(seconds[i]>=0 && seconds[i]<=59)){
			
			cout<<"Invalid Input...Try again.."<<endl;
}
}
}
int total[2];
total[0]=getTotsec(hours[0],minutes[0],seconds[0]);
total[1]=getTotsec(hours[1],minutes[1],seconds[1]);
int totdiff;

if (total[0]>total[1]){
totdiff=total[0]-total[1]	;
cout<<"Diferent between "<<hours[0]<<":"<<minutes[0]<<":"<<seconds[0]<<" and "<<hours[1]<<":"<<minutes[1]<<":"<<seconds[1]<<" = "<<totdiff<<" Seconds"<<endl;

}else if (total[1]>total[0]){
	totdiff=total[1]-total[0]	;
cout<<"Diferent between "<<hours[1]<<":"<<minutes[1]<<":"<<seconds[1]<<" and "<<hours[0]<<":"<<minutes[0]<<":"<<seconds[0]<<" = "<<totdiff<<" Seconds"<<endl;
	
}else{
	totdiff=0;

cout<<"Diferent between "<<hours[1]<<":"<<minutes[1]<<":"<<seconds[1]<<" and "<<hours[0]<<":"<<minutes[0]<<":"<<seconds[0]<<" = "<<totdiff<<" Seconds "<<endl;	
	
}

	
}



int getTotsec(int hours,int minutes,int seconds){

int totSec=hours*60*60+minutes*60+seconds;
return totSec;


}
