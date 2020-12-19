#include <iostream>
using namespace std;
int main(){
	//Question 1
/*	int num1, num2;
	cout<< "Enter 2 single digit integers"<<endl;
	cin>> num1;
	cin>> num2;
	for (int i=1; i<=1000; i++){
		if (i % num1 == 0 && i % num2 ==0){
			cout<< i << '\t';
		}
	} */

	//Question 2
	
/*	for (int n=1; n<= 17000; n++){
		if (n*n > 17000){
			cout << n <<endl;
			return 0;
		}
	} */
	//Question 3

	for (int n = 12000; n>=1; n--){
		if ((n*n*n) < 12000){
			cout <<n<<endl;
			return 0;
		}
	}	

	return 0;
}
