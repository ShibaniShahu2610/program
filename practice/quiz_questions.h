#ifndef QUIZ_QUESTIONS_H
#define QUIZ_QUESTIONS_H

#include <stdio.h>
#include <string.h>

#define MAX_ANSWER_LENGTH 50

// Structure to represent a quiz question
struct Question {
    char question[MAX_ANSWER_LENGTH];
    char options[4][MAX_ANSWER_LENGTH];
    int correct_option;
};

// Array of quiz questions
extern struct Question questions[];

#endif /* QUIZ_QUESTIONS_H */
