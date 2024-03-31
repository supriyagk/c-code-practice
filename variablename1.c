#include <stdio.h>
int main()
{
    int studentID = 9;
    int studentAge = 22;
    char studentGrade = 'A';
    float studentFee = 50000.50;

    printf ("The student ID is:%d\n", studentID);
    printf("The student Age is:%d\n", studentAge);
    printf ("The student grade is:%c\n", studentGrade);
    printf ("The student fee is:%.2f\n", studentFee);
    return 0;

}


#include <stdio.h>
int main()
{
    int studentId;
    int studentAge;
    char studentGrade;
    float studentFee;

    printf ("Enter the student ID:");
    scanf ("%d", &studentId);
    printf ("The student ID No. is :%d\n", studentId);
    printf ("Enter the studen age:");
    scanf ("%d", &studentAge);
    printf ("The student age is :%d\n",studentAge);
    printf ("Enter the student grade:");
    scanf (" %c", &studentGrade);
    printf ("The student grade is: %c\n", studentGrade);
    printf("Enter the student fee:");
    scanf ("%f", &studentFee);
    printf ("The student fee is:%.2f\n", studentFee);
    return 0;

}
