#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100
int x;
// x is the number of the student
void sortScores(int scores[], char names[MAX_STUDENTS][MAX_NAME_LENGTH], int x);
void printBelowAverage(int scores[], char names[MAX_STUDENTS][MAX_NAME_LENGTH], int x, float average);

int main()
{
    int x, scores[MAX_STUDENTS];
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    float average = 0;

    // input the number of students
    printf("Enter the number of the total students: ");
    scanf("%d", &x);

    // input the student names and scores
    int i;
    for( i = 0; i < x; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the score of student %d: ", i + 1);
        scanf("%d", &scores[i]);
        average += scores[i];
    }

    average /= x; // Calculate average score

    // Sorting scores in ascending order for easier analysis
    sortScores(scores, names, x);

    // Displaying results
    printf("\nAverage Score: %.2f\n", average);
    printBelowAverage(scores, names, x, average);
    printf("Highest Test Score: %d by %s\n", scores[x - 1], names[x - 1]);
    printf("Top Student: %s, Congratulations on achieving the highest score!\n", names[x - 1]);

    return 0;
}

// Function to sort scores and rearrange names accordingly
void sortScores(int scores[], char names[MAX_STUDENTS][MAX_NAME_LENGTH], int x) {
    int i,j;
    for( i = 0; i < x - 1; i++) {
        for( j = 0; j < x - i - 1; j++) {
            if(scores[j] > scores[j + 1]) {
                // Swap scores
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                // Swap names
                char tempName[MAX_NAME_LENGTH];
                strcpy(tempName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], tempName);
            }
        }
    }
}

// Function to print students with below-average scores
void printBelowAverage(int scores[], char names[MAX_STUDENTS][MAX_NAME_LENGTH], int x, float average) {
    printf("\nBelow Average Scores:\n");
   int i;
    for( i = 0; i < x; i++) {
        if(scores[i] < average) {
            printf("%s scored %d, which is below the average. Please review your study materials.\n", names[i], scores[i]);
        }
    }
}
