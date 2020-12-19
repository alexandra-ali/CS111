#include <iostream>
using namespace std;
int main(){
	//Question 1
	int input, pos=0, neg=0, sum=0;
	double avg;
	do {
		cout<<"Please enter an integer (0 to exit)"<<endl;
		cin>>input;
		sum = input + sum;
		if( input < 0){
			neg++;
		}else if(input > 0){
			pos++;
		}
		
	}while(input!=0);
	avg= sum/(neg+pos);
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg<<endl;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<avg<<endl;	

	//Question 2
/*	int start, end, count=0;
	cout <<"Enter starting temperature: "<<endl;
	cin >> start;
	cout <<"Enter ending temperature: "<<endl;
	cin >> end;
	while(start>end||start<0||start>50||end<0||end>50){
		count++;
		if(count==5){
			cout<<"5 failed attempts"<<endl;
			return 0;
		}
		cout<<"Enter new start temp: "<<endl;
		cin >> start;
		cout<<"Enter new end temp: "<<endl;
		cin >> end;
	} 
	for (int t=start; t<=end; t++){
		cout<<"Celsius: "<<t<<"   Farenheit: "<< t*1.8+32<<endl;
	} */

	return 0;
}
