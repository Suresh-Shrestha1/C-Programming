#include<stdio.h>
struct student{
	char name[20];
	int sem;
};
int main()
{
	struct student st = {"Suresh", 1};
	printf("Name: %s\n", st.name);
	printf("Semester: %d", st.sem);
	return 0;
}
