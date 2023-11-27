#include<stdio.h>
//find the minimum value of an array
int findMin(int arr[], int n){
	int i, min = arr[0];
	for(i = 0; i < n; i++){
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}
int main(){
	int a[] = {10, 5, 7, 1, 20};
	printf("%d", findMin(a, 5));
	return 0;
}
