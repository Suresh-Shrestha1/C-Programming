#include<stdio.h>
struct book {
	char ISBN[20];
	char title[50];
	char author[30];
	float price;
};

int main(){
	struct book bk[2];
	int n = 2;
	int highest = 0, lowest = 0;
	printf("Enter the details of 2 books: \n");
	int i;
	for(i = 0; i < n; i++)
	{
		printf("ISBN: ");
		scanf("%s",bk[i].ISBN);
		printf("Title: ");
		scanf("%s",bk[i].title);
		printf("Author: ");
		scanf("%s",bk[i].author);
		printf("Price: ");
		scanf("%f",&bk[i].price);
	}
	// finding highest and lowest
	for(i = 1; i < n; i++){
		if(bk[i].price > bk[highest].price){
			highest = i;
		}
		if(bk[i].price < bk[lowest].price){
			lowest = i;
		}
	}
	// displaying record
	// highest price
	printf("Book with a highest price\n");
	printf("ISBN: %s\n",bk[highest].ISBN);
	printf("Title: %s\n",bk[highest].title);
	printf("Author : %s\n",bk[highest].author);
	printf("Price: %f\n",bk[highest].price);
	// lowest price
	printf("Book with a lowest price\n");
	printf("ISBN: %s\n",bk[lowest].ISBN);
	printf("Title: %s\n",bk[lowest].title);
	printf("Author : %s\n",bk[lowest].author);
	printf("Price: %f\n",bk[lowest].price);
	
	return 0;
}

