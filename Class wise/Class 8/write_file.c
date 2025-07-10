#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("C://cLab//file1.txt","w");
	if(fptr == NULL){
		printf("Error ! file creation failed");
	}else{
		printf("File created sucessfully");
	}
	fclose(fptr);
	return 0; 
}

