#include <iostream>
using namespace std;

int main() {

    int answer;
    int score = 0;

    cout << "===== C++ Quiz Application =====\n\n";

    // Question 1
    cout << "1. Which keyword is used to declare a constant in C++?\n";
    cout << "1) var\n2) const\n3) static\n4) define\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        score++;
    }

    // Question 2
    cout << "\n2. Which loop executes at least once?\n";
    cout << "1) for\n2) while\n3) do-while\n4) none\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        score++;
    }

    // Question 3
    cout << "\n3. What is the size of int in most modern systems?\n";
    cout << "1) 2 bytes\n2) 4 bytes\n3) 8 bytes\n4) 16 bytes\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        score++;
    }

    // Question 4
    cout << "\n4. Which operator is used for comparison?\n";
    cout << "1) =\n2) ==\n3) +=\n4) &&\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        score++;
    }

    // Question 5
    cout << "\n5. Which header file is used for cout and cin?\n";
    cout << "1) <stdio.h>\n2) <string>\n3) <iostream>\n4) <math.h>\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        score++;
    }

    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << "/5\n";

    if (score == 5) {
        cout << "Excellent!\n";
    }

    else if (score >= 3) {
        cout << "Good Job!\n";
    }
    
    else {
        cout << "Keep Practicing!\n";
    }

    return 0;
}