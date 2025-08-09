#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h> // For sleep function
#include<stdlib.h> // For exit function

void input_choice(int);
void fill_time(char*,int); // Function prototype
void fill_date(char*);
void clear_screen();

int main()
{
    char time [50],date[100];
    int choice;
    input_choice(choice);

    while(1){

        fill_time(time ,choice); // Fill the time based on user choice
        fill_date(date); // Fill the date
        clear_screen(); // Clear the screen
        printf("Current Time : %s\n",time); // Print the formatted time
        printf("Date : %s\n",date); // Print the formatted date
        sleep(1); // Sleep for 1 second
    }
    return 0;
}
void input_choice(int choice)
{

    printf("Choose the time format:\n");
    printf("24 Hour Format\n");
    printf("12 Hour Format\n");
    printf("Enter your choice (1 for 24 Hour, 2 for 12 Hour): ");
    scanf("%d",& choice); // Read user choice
}

void fill_date(char* buffer)
{
    time_t rawtime;
    struct tm *current_time;
    
    
    time(&rawtime); // Get the current time
    current_time = localtime(&rawtime); // Convert to local time
    strftime(buffer , 100, "%A %B %d %Y" , current_time); // Format the date)
}

void fill_time(char* buffer,int choice) 
{
    time_t rawtime;
    struct tm *current_time;
    
    
    time(&rawtime); // Get the current time
    current_time = localtime(&rawtime); // Convert to local time
    if(choice == 1)
    {
     strftime(buffer, 50, "%I:%M:%S " , current_time); // Format the time
    }
    else{
        strftime(buffer, 50, "%H:%M:%S %p" , current_time); // Format the time
    }
    
   
}
void clear_screen()
{
   #ifdef _WIN32
   system("cls"); // Clear screen for Windows
   #else
   system("clear"); // Clear screen for Unix/Linux
   #endif
}