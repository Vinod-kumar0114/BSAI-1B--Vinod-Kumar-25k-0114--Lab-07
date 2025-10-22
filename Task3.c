#include <stdio.h>
int main() {
    int marks = 0, i = 0, j = 0;
    int pass[10], fail[10];
    int count = 0, PassCount = 0, FailCount = 0;
    int totalPass = 0, totalFail = 0;

    printf("Enter the marks (0-10) for the students (Enter -1 to stop):\n");

    int a = 1;
    while (count < 10) {
        printf("Marks of student %d: ", a);
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[i] = marks;
            ++i;
            totalPass += marks;
            PassCount++;
        } else if (marks >= 0 && marks < 5) {
            fail[j] = marks;
            ++j;
            totalFail += marks;
            FailCount++;
        } else {
            printf("Invalid marks! Please enter between 0 and 10.\n");
            continue;
        }

        a++;
        count++;
    }

    int x;
    printf("\nPassing marks are:\n");
    for (x = 0; x < i; x++) {
        printf("%d ", pass[x]);
    }

    if (PassCount > 0)
        printf("\nAverage of passed students: %.2f", (float)totalPass / PassCount);
    else
        printf("\nNo passed students.");

    printf("\n\nFailing marks are:\n");
    for (x = 0; x < j; x++) {
        printf("%d ", fail[x]);
    }

    if (FailCount > 0)
        printf("\nAverage of failed students: %.2f\n", (float)totalFail / FailCount);
    else
        printf("\nNo failed students.\n");

    return 0;
}

