#include <iostream>
using namespace std;
int main() {
	//Question 1
	int r;
	double a, c;
	cout <<"Enter radius of circle"<<endl;
	cin >> r;
	a = 3.14159 * r * r;
	c = 2 * 3.1459 * r;
	cout <<"Area is: "<< a <<endl;
	cout <<"Circumfrence is: "<< c <<endl;

	//Question 2
	int q, d, n, p, dollars, cents;
	cout <<"Enter amount of quarters"<<endl;
	cin >> q;
	cout <<"Enter amount of dimes"<<endl;
	cin >> d;
	cout <<"Enter amount of nickels"<<endl;
	cin >> n;
	cout <<"Enter amount of pennies"<<endl;
	cin >>p;
	q = q * 25; 
	d = d * 10;
	n = n * 5;
	cents = q + d + n + p;
	
	//cout <<"You have " << cents <<" cents"<<endl;

/* I used integer division to find the whole dollar amount of the change
and I used modulus for the cents because the remainder of the divison 
would be the change left because its less than 100
*/
	dollars = cents / 100;
	cents = cents % 100;
	cout <<"You have "<<dollars<< " dollars and "<<cents<<" cents"<<endl;
	return 0;
}
