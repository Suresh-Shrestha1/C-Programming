#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("C://cLab//file1.txt","a");
	fprintf(fptr, " Hello World");
	fclose(fptr);
	return 0;
}

