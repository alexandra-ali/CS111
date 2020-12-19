#include <iostream>
using namespace std;
int main(){
	//Question 1
/*	double che, sav;
	cout <<"Enter amount in Checking:"<<endl;
	cin >> che;
	cout <<"Enter amount in Savings:"<<endl;
	cin >> sav;
	double total = che + sav;
	if (total <= 0){
		cout <<"Bankrupt"<<endl;
	}else if (total > 250,000.00){
		cout<<"Money Bags"<<endl;
	}else {
		cout<<"Total: "<< total <<endl;

	} */

	//Question 2
	int num;
	cout <<"Enter a postitive 3 digit number"<<endl;
	cin >>num;
	if (num< 100 || num >999){
		cout <<"Error"<<endl;
		return 0;
	}else {
		cout<<(num/100)+((num%100)/10)+((num%100)%10)<<endl;
	
	}

	return 0;
}
