#include <stdio.h>

char calculate_grade(float marks) {
    if (marks >= 80 && marks <= 100)
        return 'A';
    else if (marks >= 70 && marks <= 79)
        return 'B';
    else if (marks >= 60 && marks <= 69)
        return 'C';
    else if (marks >= 50 && marks <= 59)
        return 'D';
    else if (marks >= 0 && marks <= 49)
        return 'F';
    else
        return 'Invalid grade'; 
}

int main() {
    float marks;

    printf("Enter the total marks obtained: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
        printf("Marks should be between 0 and 100\n");
    else {
        char grade = calculate_grade(marks);
        printf("Letter Grade: %c\n", grade);
    }

    return 0;
}
