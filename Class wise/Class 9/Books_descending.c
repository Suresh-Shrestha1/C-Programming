#include<stdio.h>
#include<string.h>
struct book{
	char bid[30];
	char title[30];
	float price;
	int pages;
};

void bubbleSortBooks(struct book *bk, int n) {
    int i, j;
    struct book temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp((bk + j)->title, (bk + j + 1)->title) < 0) { // Descending order
                temp = *(bk + j);
                *(bk + j) = *(bk + j + 1);
                *(bk + j + 1) = temp;
            }
        }
    }
}
int main(){
	struct book bk[2];
	int n = 2;
	printf("Enter the details of 2 books: \n");
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Bid: ");
		scanf("%s",bk[i].bid);
		printf("Title: ");
		scanf("%s",bk[i].title);
		printf("Price: ");
		scanf("%f",&bk[i].price);
		printf("Pages: ");
		scanf("%d",&bk[i].pages);
	}
	// sort books
	bubbleSortBooks(bk, n);
	// display sorted books
	printf("Displaying record in Descending Order: \n");
	for(i = 0; i < n; i++){
		printf("Book %d\n" , i+1);
		printf("Bid: %s\n",bk[i].bid);
		printf("Title: %s\n",bk[i].title);
		printf("Price : %f\n",bk[i].price);
		printf("Pages: %d\n",bk[i].pages);
	}
	return 0;
}

