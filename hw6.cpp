#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int biggestDigit(int x){
	int c=0,d=x;	
	while(d>= c){
		c= x/10;
		d= c%10;
	}
	return d;
}

int sumOfDigits(int s){
	int a=0;
	while(s/10 !=0){
		s=s/10;
		a+=s%10;
		
	}
	return a;
}

int main(){
//Q1
	int r=0;
	srand(time(0));
	r= rand()% 1000 +1000;
	cout <<r<<endl;
//Q2
	int x;
	cout<<"Enter Integer"<<endl;
	cin>>x;
	cout<<"Biggest Digit: "<<biggestDigit(x)<<endl;
//Q3
	cout<<"Biggest Digit of Random Int: "<<biggestDigit(r)<<endl;
//Q4
	int s;
	cout<<"Enter Integer"<<endl;
	cin>>s;
	cout<<"Sum of Digits: "<<sumOfDigits(s)<<endl;	
//Q5
	cout<<"Sum of Digits of Random Int: "<<sumOfDigits(r)<<endl;

	return 0;

}
