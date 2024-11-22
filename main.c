#include <stdio.h>

int main() {
    // Questions, options, and correct answers
    char *questions[] = {
        "1. Which of the following is the correct syntax to declare a variable in C?",
        "2. What does the `printf` function do in C?",
        "3. What is the range of values for a variable of type `char`?",
        "4. Which of the following is used to create a constant variable in C?",
        "5. How do you start the main function in C?",
        "6. What symbol is used to terminate a statement in C?",
        "7. Which of the following is not a valid data type in C?",
        "8. What does `\\n` represent in a string?",
        "9. What is the output of 5 / 2 in C (assuming both are integers)?",
        "10. Which library must be included to use the `printf` and `scanf` functions?"
    };

    char *options[][4] = {
        {"A. int x;", "B. var x;", "C. x = int;", "D. declare int x;"},
        {"A. Reads input", "B. Prints output", "C. Allocates memory", "D. Terminates the program"},
        {"A. -255 to 255", "B. -128 to 127", "C. 0 to 255", "D. None of the above"},
        {"A. #define", "B. const", "C. static", "D. final"},
        {"A. main()", "B. void main()", "C. int main()", "D. public static void main()"},
        {"A. ,", "B. ;", "C. .", "D. :"},
        {"A. float", "B. int", "C. string", "D. double"},
        {"A. A new line", "B. A tab", "C. A null character", "D. A backslash"},
        {"A. 2.5", "B. 2.0", "C. 2", "D. 3"},
        {"A. <conio.h>", "B. <math.h>", "C. <stdio.h>", "D. <stdlib.h>"}
    };
    char answers[] = {'A', 'B', 'B', 'B', 'C', 'B', 'C', 'A', 'C', 'C'};
    char userAnswer;
    char userReply;
    printf("Welcome to the C Programming Quiz!\n");
    printf("You will be asked 10 questions. Each question has 4 options: A, B, C, or D.\n");
    printf("Enter your answer for each question and press Enter.\n\n");
    while (1){
        int score = 0;
        for (int i = 0; i < 10; i++) {
            printf("%s\n", questions[i]);
            for (int j = 0; j < 4; j++) {
                printf("%s\n", options[i][j]);
            }

            printf("Your answer: ");
            scanf(" %c", &userAnswer);

            if (toupper(userAnswer) == answers[i]) {
                printf("Correct!\n\n");
                score++;
            } else {
                printf("Wrong! The correct answer was %c.\n\n", answers[i]);
            }
        }
        printf("Quiz Over!\n");
        printf("Your final score: %d/10\n", score);

        printf("Press Y if you want to play again: ");
        scanf(" %c", &userReply);
        if (toupper(userReply) != 'Y'){
            break;
        }
    }
    return 0;
}
