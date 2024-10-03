#include <stdio.h>

#define TOTAL_QUESTIONS 20

typedef struct {
    char question[256];
    char options[4][100];
    char answer;
} Question;

void displayQuestion(Question q, int questionNumber) {
    printf("Question %d: %s\n", questionNumber + 1, q.question);
    for (int i = 0; i < 4; i++) {
        printf("  %c) %s\n", 'A' + i, q.options[i]);
    }
}

int main() {
    Question quiz[TOTAL_QUESTIONS] = {
        {"What does CPU stand for?", {"Central Processing Unit", "Computer Personal Unit", "Central Programming Unit", "Computer Processing Unit"}, 'A'|'a'},
        {"Which company developed the Windows operating system?", {"Apple", "Microsoft", "IBM", "Google"}, 'B'},
        {"What does RAM stand for?", {"Read Access Memory", "Random Access Memory", "Run Access Memory", "Rapid Access Memory"}, 'B'},
        {"What is the main function of an operating system?", {"To manage hardware and software resources", "To play games", "To create documents", "To connect to the internet"}, 'A'},
        {"Which programming language is known for web development?", {"Python", "C++", "HTML", "Java"}, 'C'},
        {"What is the purpose of an antivirus program?", {"To enhance graphics", "To scan and remove malware", "To increase CPU speed", "To optimize RAM usage"}, 'B'},
        {"What is the largest unit of digital information?", {"Kilobyte", "Megabyte", "Gigabyte", "Terabyte"}, 'D'},
        {"What does 'HTTP' stand for?", {"HyperText Transfer Protocol", "HyperText Transmission Protocol", "HighText Transfer Protocol", "HighText Transmission Protocol"}, 'A'},
        {"Which of the following is a type of software?", {"Hardware", "Operating System", "Peripheral", "Network"}, 'B'},
        {"What does 'GUI' stand for?", {"General User Interface", "Graphical User Interface", "General User Integration", "Graphical User Integration"}, 'B'},
        {"Which of the following is an open-source operating system?", {"Windows", "macOS", "Linux", "Android"}, 'C'},
        {"What is the primary purpose of a firewall?", {"To enhance performance", "To filter incoming and outgoing network traffic", "To increase storage", "To run applications"}, 'B'},
        {"What is 'phishing'?", {"A type of virus", "A method of stealing sensitive information", "A software for gaming", "A hardware component"}, 'B'},
        {"Which of the following is a markup language?", {"Python", "Java", "HTML", "C++"}, 'C'},
        {"What is a 'bug' in computer programming?", {"An error or flaw in software", "A type of malware", "A hardware issue", "A security feature"}, 'A'},
        {"What does 'VPN' stand for?", {"Virtual Private Network", "Virtual Public Network", "Variable Private Network", "Variable Public Network"}, 'A'},
        {"What is the main function of a database?", {"To store and manage data", "To run applications", "To play multimedia", "To connect devices"}, 'A'},
        {"Which device is used to connect a computer to the internet?", {"Router", "Monitor", "Printer", "Keyboard"}, 'A'},
        {"What does 'SSD' stand for?", {"Solid State Drive", "Super Speed Drive", "Standard Storage Device", "Simple Storage Drive"}, 'A'},
        {"What is the function of an algorithm?", {"To execute commands", "To solve problems", "To create graphics", "To store data"}, 'B'},
    };

    int score = 0;
    char userAnswer;

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        displayQuestion(quiz[i], i);
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);

        if (userAnswer == quiz[i].answer) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c)\n\n", quiz[i].answer);
        }
    }

    printf("Your final score: %d out of %d\n", score, TOTAL_QUESTIONS);
    return 0;
}
