#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double avg (int nums[]){
	int sum=0;
	for(int i=0; i<25; i++){
		sum+= nums[i];
	}
	double average= (double)sum/25;
	return average;
}
int max (int nums[]){
	int max=0;
	for(int i=0; i<25; i++){
		if(nums[i]>max){
			max= nums[i];
		}
	}
	return max;
}
int min (int nums[]){
	int min= 99;
	for(int i=1; i<25; i++){
		if(nums[i]<min){
			min= nums[i];
		}
	}
	return min;
}

int main(){
	srand(time(0));
	int nums[25]={0};
	for (int i=0; i<25; i++){
		nums[i]= rand()%100; 
	}
	cout<<"Average: "<< avg(nums) <<endl;
	cout<<"Max: "<< max(nums) <<endl;
	cout<<"Min: "<< min(nums)  <<endl;
	
	return 0;
}
