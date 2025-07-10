//Write a program in C to copy contents of one file to another file.

#include<stdio.h>
int main(){
	FILE *fptr_src, *fptr_des;
	char ch;
	
	fptr_src = fopen("C://cLab//emp.txt","r"); // open file in read mode
	if(fptr_src == NULL){
		printf("Error! Unable to open the source filr.");
		exit(0);
	}
	
	fptr_des = fopen("C://cLab//emp_cpy.txt","w"); // open file in write mode
	if(fptr_src == NULL){
		printf("Error! Unable to open the source filr.");
		fclose(fptr_src);
		exit(0);
	}
	// copy contents
	ch = fgetc(fptr_src);
	while(ch != EOF){
		fputc(ch, fptr_des);
		ch = fgetc(fptr_src);
	}
	printf("File copied successfully!!!\n");
	fclose(fptr_src);
	fclose(fptr_des);
	return 0;
}

