#include <stdio.h>

int main() {
    char id[11];
    int hours;
    float rate;
    double salary;
    
    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%10s", id); 

    printf("Input the working hrs: ");
    scanf("%d", &hours); 

    printf("Input the Salary amount/hr: ");
    scanf("%f", &rate); 

    salary = (double)hours * rate;
    
    printf("\nExpected Output:\n");
    printf("Employees ID = %s\n", id);)
    printf("Salary = US %.2f\n", salary);

    return 0;
}