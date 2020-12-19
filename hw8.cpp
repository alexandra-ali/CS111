#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
//sorry i had a bit of difficulty with this homework o.o
int firstTwo(int n){
	if(n<10){
		return n;
	}
	while (n/10 > 99){
		n= firstTwo(n/10);
	}
	return n+(n/10);
}
int findMinGap(int array[], int length){
	int diff= array[0]-array[1];
	int d=0;
	for(int i=1; i<length-1; i++){
		d= array[i]-array[i+1];
		if(abs(d)<abs(diff)){
			diff=d;
		}
		
	}
	return diff;
}
int findLargestIndex(int array[][6], int rows, int columns){
	int sum[3]={0};
	for(int r=0; r<rows; r++){
		for(int c=0;c<columns; c++){
			sum[r]+= array[r][c];	
		}
	}
	if(sum[0]<sum[1]){
		return 0;
	}else if(sum[1]<sum[2]){
		return 1;
	}
	return 2;
}

int main(){
	cout<<"First Two: "<< firstTwo(8325) <<endl;
	int array[3][6]={{3,6,8,2,4,1}, {2,4,5,1,3,4}, {1,0,9,0,1,0}};
	cout<<"Largest Index: "<< findLargestIndex(array, 3, 6)<<endl;
	int a2[]={10,14,-5,-3,0,5,7};
	cout<<"Min Gap: "<< findMinGap(a2,7)<<endl;
	return 0;

}

