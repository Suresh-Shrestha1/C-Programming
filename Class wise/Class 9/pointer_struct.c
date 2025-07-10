#include<stdio.h>
struct student{
	int id;
	char name[20];
	int sem;
};
int main()
{
	struct student st = {1, "Suresh", 3};
	struct student *ptr = &st;
//	struct student st ;
//	printf("Enter your name: ");
//	scanf("%s", st.name);
//	printf("Enter your semester: ");
	printf("ID: %d\n", ptr->id);
	printf("Name: %s\n", ptr->name);
	printf("Marks: %d", ptr->sem);
	return 0;
}
