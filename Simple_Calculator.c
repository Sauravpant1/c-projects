#include<stdio.h>
#include<math.h>
int main()
{
	printf("Welcome to the simple calculator program\n");
	printf("This program will perform basic arithmetic operations.\n");
	printf("Please enter two numbers:\n");
	float num1, num2;
	scanf("%f %f", &num1, &num2);
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for division\n");
	printf("Enter 5 for remainder\n");
	printf("Enter 6 for square of the numbers\n");
	printf("Enter 7 for square root of the numbers\n");
	printf("Enter 8 to exit the program\n");
	printf("Please select an operation by entering the corresponding number:\n");
	int choice;
	scanf("%d", &choice);
	switch(choice) {
		case 1:
			printf("Result of addition: %f\n", num1 + num2);
			break;
		case 2:	
			printf("Result of subtraction: %f\n", num1 - num2);
			break;
		case 3:
			printf("Result of multiplication: %f\n", num1 * num2);
			break;
		case 4:
			if(num2 != 0) {
				printf("Result of division: %f\n", num1 / num2);
			} else {
				printf("Error: Division by zero is not allowed.\n");
			}
			break;
			case 5:
			printf("Remainder = %d\n", (int)num1 % (int)num2);
			break;
		case 6:
			printf("Square of first number = %f\n", num1 * num1);
			printf("Square of second number = %f\n", num2 * num2);
			break;
		case 7:
			printf("Square root of first number = %f\n", sqrt(num1));
			printf("Square root of second number = %f\n", sqrt(num2));
			break;
		case 8:
			printf("Exit\n");
			break;
		default:
			printf("Invalid choice. Please select a valid operation.\n");
		}
		return 0;
	}