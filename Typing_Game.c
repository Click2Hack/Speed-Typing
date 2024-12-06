#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TIME_LIMIT 20 // Time limit in seconds
#define MAX_INPUT_LENGTH 256
#define NUM_SENTENCES 10
#define SCORE_PER_CORRECT 10

void clear_input_buffer() {
    while (getchar() != '\n'); // Clear the input buffer
}

int main() {
    const char *sentences[NUM_SENTENCES] = {
        "The quick brown fox jumps over the lazy dog.",
        "A journey of a thousand miles begins with a single step.",
        "To be or not to be, that is the question.",
        "All that glitters is not gold.",
        "In the middle of difficulty lies opportunity.",
        "The only thing we have to fear is fear itself.",
        "Life is what happens when you're busy making other plans.",
        "The greatest glory in living lies not in never falling, but in rising every time we fall.",
        "You miss 100% of the shots you don't take.",
        "Success is not final, failure is not fatal: It is the courage to continue that counts."
    };

    char user_input[MAX_INPUT_LENGTH];
    time_t start_time, end_time;
    int total_score = 0;

    // Seed the random number generator
    srand(time(NULL));

    while (1) {
        // Select a random sentence
        const char *selected_sentence = sentences[rand() % NUM_SENTENCES];

        printf("Typing Game!\n");
        printf("Type the following sentence within %d seconds:\n", TIME_LIMIT);
        printf("\"%s\"\n", selected_sentence);
        
        // Start the timer
        start_time = time(NULL);
        
        // Get user input
        printf("Your input: ");
        fgets(user_input, MAX_INPUT_LENGTH, stdin);
        
        // Remove the newline character from fgets
        user_input[strcspn(user_input, "\n")] = 0;

        // End the timer
        end_time = time(NULL);
        
        // Calculate the time taken
        double time_taken = difftime(end_time, start_time);

        // Check if the time limit was exceeded
        if (time_taken > TIME_LIMIT) {
            printf("Time's up! You took too long.\n");
            break; // Exit the loop if time is exceeded
        } else {
            // Check if the input matches the sentence
            if (strcmp(user_input, selected_sentence) == 0) {
                total_score += SCORE_PER_CORRECT;
                printf("Congratulations! You typed the sentence correctly.\n");
                printf("You took %.2f seconds to type the sentence.\n", time_taken);
                printf("Your current score: %d\n", total_score);
            } else {
                printf("Incorrect input. Game over!\n");
                break; // Exit the loop if the input is incorrect
            }
        }
    }

    // Display the final score
    printf("Your final score: %d\n", total_score);

    return 0;
}