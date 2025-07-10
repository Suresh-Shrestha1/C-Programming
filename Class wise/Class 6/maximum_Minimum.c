#include<stdio.h>
void min_and_max(int arr[], int size, int *max, int *min){
	int i;
	for(i = 1; i < size; i++){
		if(arr[i] > *max){
			*max = arr[i];
		}
		if(arr[i] < *min){
			*min = arr[i];
		}
	}
}
int main(){
	int arr[] = {5, 35, 40, 76, 5, 89};
	int min = arr[0];
	int max = arr[1];
	int size = sizeof(arr)/sizeof(arr[0]);
	min_and_max(arr, size, &max, &min);
	printf("Maximum number is %d.\n",max);
	printf("Mainimum number is %d.",min);
	return 0;
}

