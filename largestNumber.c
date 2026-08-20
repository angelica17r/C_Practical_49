#include <stdio.h>

int Largest(int num1, int num2, int num3) //function to do the task
{
    int largest = num1; //set 1st value as default largest

    if (num2 > largest) {
        largest = num2; //if 2nd value is bigger, then largest updates
    }
    if (num3 > largest) {
        largest = num3; //if 3rd value is bigger, then largest updates
    }

    return largest;
}

int main() {
    int num1, num2, num3, largest;

    printf("Enter the 1st no. : \n");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Enter the 2nd no. : \n");
    fflush(stdout);
    scanf("%d", &num2);

    printf("Enter the 3rd no. : \n");
    fflush(stdout);
    scanf("%d", &num3);

    largest = Largest(num1, num2, num3); //call the function to use it

    printf("The largest no. is : %d \n", largest); //output

    return 0;
}
