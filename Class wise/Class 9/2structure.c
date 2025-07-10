#include<stdio.h>
struct student{
	char name[20];
	int sem;
};
int main()
{
	struct student st;
	printf("Enter your name: ");
	scanf("%s",st.name);
	printf("Enter your semester: ");
	scanf("%d",&st.sem);
	printf("Displaying\n");
	printf("Name: %s\n", st.name);
	printf("Semester: %d", st.sem);
	return 0;
}
