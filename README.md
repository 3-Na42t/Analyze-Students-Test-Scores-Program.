# Student Test Score Analyzer Project

### Overview
This program is designed to analyze test scores of students. It utilizes pointers to manage data efficiently and implements several features to provide valuable insights into the students' performance.

### Features
- **Average Score Calculation:** Computes the average score from the test results.
- **Below Average Score Identification:** Lists students scoring below the average with a warning message.
- **Highest Score Identification:** Finds and displays the highest test score.
- **Top Student Recognition:** Identifies the top-performing student and displays an appreciation message.

### Implementation Details
- **Data Structure:** A `struct` named `Student` is used to store names and scores.
- **Pointers:** Pointers are extensively used for data manipulation, passing structures to functions, and improving performance.
- **Sorting Algorithm:** A bubble sort algorithm is implemented to sort the students based on their scores.
- **Dynamic Memory Allocation:** Although not required, the program is designed to support dynamic memory allocation for scalability.

### Functions
- `enterStudentData`: Takes user input for student names and scores.
- `calculateAverageScore`: Calculates the average score of all students.
- `listBelowAverageStudents`: Lists all students with scores below the average.
- `displayHighestScore`: Displays the highest score among the students.
- `displayTopStudent`: Displays the top student's name and score.

### User Instructions
1. Compile the program using a C compiler like `gcc`.
2. Run the executable and follow the on-screen prompts to enter student data.
3. The program will automatically display the analysis after all data is entered.

### Special Comments
- **Sorting Function:** The sorting function uses a simple comparison-based algorithm suitable for small datasets.
- **Memory Management:** Care has been taken to prevent memory leaks and buffer overflows.

### Conclusion
This program serves as a practical application of pointers and structures in C, demonstrating efficient data handling and manipulation.
