//name roll number marks
#include <stdio.h>
int main()
{
    struct student {
    char studentName[50];
    int studentRollNumber;
    float studentMarks;
    };

    printf ("Enter the name of the student:");
    scanf (" %s\n", studentName);
    printf ("The student name is: %s\n", studentName);
    printf ("Enter the student Roll Number:");
    scanf ("%d", &studentRollNumber);
    printf ("The student Roll Number is: %d\n", studentRollNumber);
    printf("Enter the students marks:");
    scanf ("%f", &studentMarks);
     printf ("The student marks is: %f\n", studentMarks);
     return 0;

}
