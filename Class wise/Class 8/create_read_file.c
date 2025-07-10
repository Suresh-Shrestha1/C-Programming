#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("C://cLab//filename.txt","r");
	fclose(fptr);
	return 0;
}

