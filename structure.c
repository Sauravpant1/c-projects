#include<stdio.h>
struct student
{
	int roll_number;
	int marks;
};
int main()
{
	struct student Ram,Shyam;
	Ram.roll_number = 1;
	Shyam.roll_number = 2;
	Ram.marks = 500;
	Shyam.marks = 400;
	printf("Ram got %d marks  \n & \n Shyam got  %d marks \n ",Ram.marks,Shyam.marks);

	return 0;
}