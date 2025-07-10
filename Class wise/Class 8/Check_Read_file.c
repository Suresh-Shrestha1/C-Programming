#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("C://cLab//filename.txt","r");
	if(fptr == NULL){
		printf("File doesn't exist");
	}else{
		printf("File opened successfully");
	}
	fclose(fptr);
	return 0; 
}
